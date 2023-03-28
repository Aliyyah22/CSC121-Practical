#include<stdio.h>

 int isEven(int);
 int num;
 int main(){
    puts("1 represents even and 0 represents odd");
    while (num != EOF){
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Result is %d\n", isEven(num));

        if(num==EOF){
            puts("Program ended");
            break;
        }
    }
}
int isEven(int num){
    if(num%2 ==0)
    return 1;
    else{
        return 0;
    }
}

