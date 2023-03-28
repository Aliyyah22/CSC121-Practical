//Find all Pythagorean triples for side1, side2, and the hypotenuse all no larger than 500
#include<stdio.h>
#include<math.h>

//a^2 + b^2 =c^2. try 1 try 1,see if it cerifies the condition
//for side 1 in 

int main(){
    /*let side1 be i, side2=j, side3=k
    int a=100, b=200,c=300;
    if(!a >= 500){
        b=300;
    c=400;
    }
    printf("%d,%d,%d",a,b,c);
    
    return 0;
        
    int a=100, b=200,c=300;
    if(!a >= 500)
        b=300;
    c=400;
    printf("%d,%d,%d",a,b,c);
    
    return 0;
    */
    unsigned int i,j,k;

   for(i=1;i<=500;i++){
        for(j=1;j<=500;j++){
            for(k=1;k<=500;k++){
                if(pow(i,2)+ pow(j,2) == pow(k,2)){
                    printf("%u %21u %21u\n", i,j,k);
                }
                else{
                    continue;
                }
            }
        }
    }
    printf("Done");
}