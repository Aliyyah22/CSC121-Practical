#include <stdio.h>
#include <math.h>
// round to the nearest higher integer
int main(void)
{
    int x = 0, y;

    printf("Enter the number you want to round to the nearest integer: ");
    scanf("%d", &x);

    while (x != -1)
    {
        y = ceil(x + .5);
        printf("The original number is %d and the rounded number is %d\n", x, y);

        printf("\nEnter the number you want to round to the nearest integer: ");
        scanf("%d", &x);
    }
}