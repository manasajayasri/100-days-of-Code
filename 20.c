#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i = 1; i<=5; i++){
        for(int j = 5 ; j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


/*

54321
5432
543
54
5

*/