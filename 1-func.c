#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        print("The larger value is %d\n", a);
    }
    else
    {
        printf("The larger value is %d\n", b);
    }
}