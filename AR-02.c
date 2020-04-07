#include <stdio.h>
int main()
{
    int c[3];
    scanf("%d%d%d", c+2, c+1, c);
    int temp[100000], ans[100000], times, highest, i, j, k;
    scanf("%d", &times);
    temp[0]=1;
    highest=0;
    for(i=0; i<times; i++)  //times you need to cross
    {
        for(j=0; j<=highest+2; j++)
            ans[j]=0;   //first round answer
        for(j=0; j<=highest; j++)
            for(k=0; k<3; k++)
                ans[j+k] += temp[j]*c[k];    // square []
        for(j=0; j<=highest+2; j++)
            temp[j]=ans[j];
        highest+=2;
    }
    for(i=highest; i>=0; i--)
    {
        printf("%d", ans[i]);
        if(i)
            printf(" ");
    }
    printf("\n");

    return 0;
}
