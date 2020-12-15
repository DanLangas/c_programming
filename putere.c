#include <stdio.h>

void main()
{
    int n;
    printf("Introduceti n:");
    scanf("%d", &n);
    int p=1;
    printf("2^%d=%d",n,p=(p<<n));
}
