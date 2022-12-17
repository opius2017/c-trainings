#include <stdio.h>
#include <math.h>

int main()
{
    int width;

    printf("Width of TV: ");
    scanf("%d", &width);
/**
 * If you use "(9/16) * width" it will be equal to 0 since 9/16 = 0. 0 x height = 0.
 * Use (9.0x16.0) X width to get calculate it in double and get the good result
 * or you use 9xwidth/16 to get the same answer
 */

    int height = (9.0/16.0) * width;
/* Print the value of height to know if it has a value of 0 or not*/
    printf("Height is %d\n", height);

    int diag = sqrt(width * width + height * height);

    printf("You need to get a TV that is %d inches\n", diag);
}