#include<stdio.h>
#include<math.h>

//create a function that takes in values of type double and return a value of type double
 double hypotenuse(double, double);

 int main(){
    //we are trying to find the hypotenuse of the 2 sides of a right angle triangle using the pythagoras theorem
    //create a variable that stores each of this values

    double x,y,hyp;

    //read in the values of x and y
    printf("Enter a value for x: ");
    scanf("%lf", &x);

    printf("Enter a value for y: ");
    scanf("%lf", &y);

    //store the value of the hypotenuse in the hyp variable
    hyp= hypotenuse(x,y);
    //print the result
    printf("The hypotenuse of %f and %f is %f",x,y,hyp);
 }
    //this is what the hypotenuse function does. It returns the square root of x^2 + y^2 
    double hypotenuse(double x, double y){
        return (sqrt(pow(x,2)+pow(y,2)));
    } 

 