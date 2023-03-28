#include<stdio.h>

/*int main(){
    int number, counter, prime;
    number = 0;
    prime = 1;//prime is true by default


//    divide by factors
    printf("Enter your number: ");
    scanf("%d", &number);

//    condition to not allow numbers less than or equal to 1
    if(number <= 1){
        printf("%d is not a prime number", number);
    }
    else{
//        loop to check for possible divisors
 /*       for(counter =2; counter < number; counter++){
            //printf("counter: %d \n", counter);
            //numbers divided by 1 or itself isn't considered because such numbers are prime
            if((number % counter) == 0){
                prime = 0; //prime is false
            }
        }

        if (prime ==1 && number > 1){
            printf("%d is a prime number.", number);
        }
        else{
            printf("%d is not a prime number", number);
        }
    }
  */  
   /* 
   counter=2;
   while (counter<number)
   {
        if((number % counter) == 0){
                    prime = 0; //prime is false
                }
         counter++;
   }
    if (prime ==1 && number > 1){
            printf("%d is a prime number.", number);
        }
        else{
            printf("%d is not a prime number", number);
         }
return 0;
}
}
*/
 // Write a C program that askes the user to enter a range of numbers and then prints the prime numbers within those range.

 int main(){
    int i, max_num=0, min_num=0,j,count;
    //since there are only 2 prime numbers,
    //c variable counts the i%j==0 section in the loop
    //Ask user to input the range
    printf("Enter a minimum number:");
    scanf("%d",&min_num);
    printf("Enter a maximum number:");
    scanf("%d",&max_num);
    
    //max num must be greater than min_num
    //max_num>min_num;
    //Write a condition for if either max num is less than or equal to 1
    if(max_num<=1){
        printf("There are no prime numbers");
        }
    //if the min num is negative or 1, start looping from 2
    else if(min_num<=1){
        //write a for loop that checks for the prime number
        for(i=2;i<max_num+1;i++){
            count=0;
            //printf("%d\n",i);
            for(j=1;j<i+1;j++){
                if(i%j==0){
                    count+=1;
                }
                if(count==2){
                //puts("The prime numbers are:");
                printf("%d\n",j);
            }
    }
 }
 }
   else{
        //write a for loop that checks for the prime number
        for(i=min_num;i<max_num+1;i++){
            count=0;
            for(j=1;j<i+1;j++){
                if(i%j==0){
                    count+=1;
                }
            }
            if(count==2){
                puts("The prime numbers are:");
                printf("%d\n",j);
            }
        }
    }
 }
    

 

     
     