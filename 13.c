#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int j = 1; j<=5; j++){

        for(int i=1; i<=5; i++){

            printf("%c",i+64);

        }
        printf("\n");
    }
    return 0;
}
