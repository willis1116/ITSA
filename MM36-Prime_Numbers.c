#include <stdio.h>
int main()
{
    int num,i,j,count,sum;
    while(scanf("%d",&num))
    {
        if(num!=0)
        {
            sum=0;
            for(i=0; i<num; i++)
            {
                count=0;
                for(j=1; j<=i; j++)
                {
                    if(i%j==0)
                        count++;
                }
                if(count==2 && num!=1)
                    sum++;
            }
            printf("%d\n",sum);
        }
        else
            break;
    }
    return 0;
}
