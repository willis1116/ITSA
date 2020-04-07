#include <stdio.h>
int main()
{
    int num, pow, time, a;
    scanf("%d", &time);

    while(time>0)
    {
        scanf("%d", &num);
        a=2;
        for (; num>=a; a++)
        {
            pow=0;
            while (num%a==0)
            {
                num=num/a;
                pow++;
            }
            if (pow>0)
            {
                printf("%d",a);
                if (pow>1)
                    printf("^%d",pow);
                if (num>1)
                    printf("*");
                else
                    printf("\n");
            }
        }
        time--;
    }
    return 0;
}
