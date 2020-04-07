#include <stdio.h>


int main()
{
    int abs, len, i, flag=0, num[3005],count[3005]= {0};
    scanf("%d", &len);
    for(i=0; i<len; i++)
        scanf("%d", num+i);
    for(i=0; i<len-1; i++)
    {
        if(num[i]>num[i+1])
            abs = num[i]-num[i+1];
        else
            abs = num[i+1]-num[i];
        if(abs<len)
            count[abs]++;
        else
            break;
    }
    for(i=1; i<len; i++)
    {
        if(count[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Not jolly\n");
    else
        printf("Jolly\n");
    return 0;
}
