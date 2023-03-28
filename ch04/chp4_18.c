#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

// initialize variables to 0
    num1 = 0;
    num2 = 0;
    num3 = 0;
    num4 = 0;
    num5 = 0;
    
    // ask user to enter five numbers between 1 and 30
    printf("Enter five numbers between 1 and 30:\n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

// condition to check if the entered numbers are between 1 and 30
    if(num1 < 1 || num1 > 30 || num2 < 1 || num2 > 30 || num3 < 1 || num3 > 30 || num4 < 1 || num4 > 30 || num5 < 1 || num5 > 30) {
        printf("Invalid input. Please enter numbers between 1 and 30.\n");
        return 0;
    }

    // the bar chart
    printf("\nBar chart:\n");
    
    printf("%2d ", num1);
    for (int i = 0; i < num1; i++) {
        printf("*");
    }
    printf("\n");
    
    printf("%2d ", num2);
    for (int i = 0; i < num2; i++) {
        printf("*");
    }
    printf("\n");
    
    printf("%2d ", num3);
    for (int i = 0; i < num3; i++) {
        printf("*");
    }
    printf("\n");
    
    printf("%2d ", num4);
    for (int i = 0; i < num4; i++) {
        printf("*");
    }
    printf("\n");
    
    printf("%2d ", num5);
    for (int i = 0; i < num5; i++) {
        printf("*");
    }
    printf("\n");
    
    return 0;
}

