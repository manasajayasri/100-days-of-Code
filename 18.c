#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i =1; i<=5;i++){
        for (int j=1; j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}


/*

A
AB
ABC
ABCD
ABCDE

*/