#include<stdio.h>

int main(){
    int counter=1;
    unsigned int number=0;
    int largest =0;
    int sec_largest =0;

    while(counter<5){
        printf("Enter a number: ");
        scanf("%u",&number);

        if(number>largest){
            sec_largest=largest;
            largest=number;
        }
        if(number>sec_largest && number<largest){
           sec_largest=number;
        }
         counter++;
    }
    printf("The 2 largest number are: %i and %i\n", largest,sec_largest);
}