#include <stdio.h>
int main()
{
    double tem;
    scanf("%lf", &tem);
    printf("Fahrenheit = %.2lf\n", tem*((double)9/(double)5)+32);
    printf("Absolute temperature = %.2lf\n", tem+273.15);

    return 0;
}
