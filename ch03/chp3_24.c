#include<stdio.h>

int main(){
    int i=1;
    printf("N\t N^2\t N^3\t N^4\n\n");

    while(i<11){
        printf("%d\t %d\t %d\t %d\t\n",i,i*i,i*i*i,i*i*i*i);
        i++;
    }
    return 0;
}




