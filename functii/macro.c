#define max(x,y) x>y?x:y
#define min(x,y) x<y?x:y
#include <stdio.h>
void main()
{
    int x,y;
    printf("Introduceti x si y:\n");
    scanf("%d %d", &x, &y);
    printf("\n\tMax este: %d", max(x,y));
    printf("\n\tMin este: %d", min(x,y));
}

