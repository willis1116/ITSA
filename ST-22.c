#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int c, i, j, ln, sum;
    long num, temp[20];
    char s[20];
    scanf("%d", &c);
    while(c--)
    {
        sum=0;
        for(j=0; j<2; j++)
        {
            num=0;
            scanf("%s", s);
            ln=strlen(s);
            for(i=0; i<ln; i++)
                temp[i]=s[i]-'0';
            for(i=0; i<ln; i++)
                num|=(temp[i]<<(ln-1-i));
            sum=sum+num;
        }
        printf("%d\n", sum);
    }
    return 0;
}
