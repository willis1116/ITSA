#include<stdio.h>
int main()
{
    int num[20000], counts, temp, first=0, i, j;
    scanf("%d", &counts);
        if(first)
            printf("\n");
        else
            first=1;
        for(i=0; i<counts; i++)
            scanf("%d", &(num[i]));
        for(i=0; i<counts-1; i++)
        {
            for(j=i+1; j<counts; j++)
            {
                if(num[i]<num[j])
                {
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        for(i=0; i<counts; i++)
            printf("%d %d\n", i+1, num[i]);
    return 0;
}
