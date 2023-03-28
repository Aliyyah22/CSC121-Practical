#include<stdio.h>
#include<math.h>

/*We are to find the value of pi from an infinite series
Looking at the series, we can see that the numerator's value is 4 and the denominator is an odd number.
Also, it starts with - and then interchanges with +

Print a table that shows the value of π approximated by one term of this series, by two terms, by
three terms, and so on. How many terms of this series do you have to use before you first get 3.14?
3.141? 3.1415? 3.14159?*/

int main(){
    int num=1,count=0;
    float total= 0.0, total1;

    
  do{
         total1= (float)4/num;
        //printf("%.2f", total1);
        if(count%2==0){
            total= total + total1;
        }
        else{
            total= total - total1;
        }
        num+=2;
        count+=1;
        

        printf("%d %21f\n", count, total);
    }
    while(total != 3.14);

    
   /*while(total != 3.14 || total != 3.1415 || total != 3.14159){
        total1= 4/num;
        if(count%2==0){
            total= total + total1;
        }
        else{
            total= total - total1;
        }
        num+=2;
        count+=1;
        printf("%d %21.5f\n", count, total);
   }*/

   printf("Done");
}