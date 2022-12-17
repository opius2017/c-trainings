#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    int larger;

    if (a > b)
    {
        larger = a;
    }
    else
    {
        larger = b;
    }
    printf("the larger value is %d\n", larger);
}