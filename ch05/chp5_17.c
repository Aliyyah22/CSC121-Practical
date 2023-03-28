#include<stdio.h>
#include<math.h>

 int right_triangle(int, int,int);
 int x,y,z;

 int main(){
    puts("Check whether the three sides of your triangle represents a right angle triangle");
    puts("1 represents true and 0 represents false");
    printf("Enter a value for x: ");
    scanf("%d", &x);

    printf("Enter a value for y: ");
    scanf("%d", &y);

    printf("Enter a value for z: ");
    scanf("%d", &z);
    printf("%d",right_triangle(x,y,z));
 }
int right_triangle(int x, int y,int z){
   if(pow(x,2)+pow(y,2)==pow(z,2)){
      return 1;
   }
   else if(pow(y,2)+pow(z,2)==pow(x,2)){
      return 1;
   }
   else if(pow(x,2)+pow(z,2)==pow(x,2)){
      return 1;
   }
   else{
      return 0;
   }
}
