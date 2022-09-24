#include<stdio.h>

int main(void){
    int a,i = 0;
    printf("Enter the number: \n");
    scanf("%d",&a);  
        
printf("So the Multiplication Table is as follows, \n");
    while(i <= 2){
        i=i+1;
        printf("%d * %d = %d\n", a, i, i*a);
    }
    return 0;
}