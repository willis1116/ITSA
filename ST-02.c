#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    char s[10000];
    while(scanf("%s", s)==1)
    {
        int ln, ans=0, i;
        ln=strlen(s);
        for(i=0; i<ln; i++)
            ans = ans*26+s[i]-'A'+1;
        printf("%d\n", ans);
    }
    return 0;
}
