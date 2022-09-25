#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=5; i>=1;i--){
        for(int j=5; j>=i;j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}


/*
E
ED
EDC
EDCB
EDCBA
*/