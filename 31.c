#include<stdio.h>
#define vowels "aeiou"
#define const int 13579
int main(void)
{
    printf("%s\n", vowels);
    for(int i=0; i<=8;i++){
        if(i%2==0){
            printf("%d",i);
        } 
    }
    printf("\n");
    printf("%d",13579);
    return 0;
}
