#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a second number: ");
    scanf("%d", &num2);

if (num1>num2){
    printf("%d is greater than %d", num1,num2);
}
else if(num1==num2){
    printf("%d is equal to %d", num1,num2);
}
else if(num1<num2){
    printf("%d is less than  %d", num1,num2);
}
}