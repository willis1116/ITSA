#include <stdio.h>

int main()
{
    int n, nr, i;
    long long f[50]= {0};
    f[1]=f[2]=1;
    for(i=3; i<=45; i++)
        f[i]=f[i-2]+f[i-1];
    scanf("%d", &nr);
    while(nr--)
    {
        scanf("%d", &n);
        printf("%lld\n", f[n]);
    }
    return 0;
}
