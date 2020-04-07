#include <stdlib.h>
#include <math.h>
#define MAX 10000
int d(int i, int j)
{
    if(i%j==0)
        return j;
    else
        return d(j, i%j);
}
int main()
{
    int nc;
    scanf("%d", &nc);
    while(nc--)
    {
        int max=-1, min=999999, n, tmp;
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &tmp);
            if(min>tmp)
                min=tmp;
            if(max<tmp)
                max=tmp;
        }
        printf("%d\n", d(max, min));
    }
    return 0;
}
