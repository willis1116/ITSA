#include <stdio.h>
#define MAX 30

int main()
{
    int i=1, j=1, m=0, n=0, q=0, ans[MAX]={0};
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        if (i==0 && j ==0)
            break;
        i=i%10;
        if(j==0)
            ans[m]=1;
        else if (i==3 || i==7 || i==8 || i==2)
        {
            q=j%4;
            if(q==0)
                q=4;
            ans[m]=i;
            for(q--;q>0;q--)
            {
                ans[m]=ans[m]*i;
            }
            ans[m]=ans[m]%10;
        }
        else if(i==4 || i==9)
        {
            q=j%2;
            if(q==0)
                q=2;
            ans[m]=i;
            for(q--;q>0;q--)
                ans[m]=ans[m]*i;
            ans[m]=ans[m]%10;

        }
        else
            ans[m]=i%10;
        m++;
    }
    for(n=0; n<m; n++)
        printf("%3d", ans[n]);
    return 0;
}
