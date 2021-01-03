#include <stdio.h>

void main()
{
    int x;
    printf("Introduceti x:");
    scanf("%d", &x);

    if(x==0)
        printf("f(x)=2");
        else
            if(x<0)
                printf("f(x)=%d", 3*x*x+7*x-10);
                else
                    printf("f(x)=%d",4*x*x);
}

