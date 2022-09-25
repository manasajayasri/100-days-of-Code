#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=1;i<=5;i++){
        for(int j=1; j<=i; j++){
            if(j%2==0){
            printf("%d",0);
            } else {
                printf("%d",1);
            }
        }
        printf("\n");
    }
    return 0;
}

/* 
1
10
101
1010
10101

*/