#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=5; i>=1; i--){
        for(int j=i; j>=1; j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}


/*

EDCBA
DCBA
CBA
BA
A

*/