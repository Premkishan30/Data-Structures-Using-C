#include <stdio.h>

int main()
{
    int x=20;
    int *ptr= &x;
    printf("Value of X%d",x);
    printf("\nValue of ptr %d",ptr);
    printf("\nValue of X using & %d",&x);
    printf("\n Value of ptr using & %d",&ptr);
    printf("\n Value of X using the pointer: %u",*ptr);

    return 0;
}