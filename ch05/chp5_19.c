#include<stdio.h>

int rectangle(int, int);
int i,j, width,height,result;

int main(){
   puts("Draw a rectangle with asterisks and specify the height as the first parameter and width as second");
   printf("%d",rectangle(5,6));
}
 
/*int rectangle(int height, int width){
    for(i=1;i<=width;i++){
      for(j=1;j<=height;j++){
         printf("*");
      }
     printf("\n");
    }
}*/
int rectangle(int height, int width){
    for(i=1;i<=height;i++){
   printf('*'*width);
    }
}