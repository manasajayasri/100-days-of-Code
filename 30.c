#include<stdio.h>
int main(int argc, char const *argv[])
{
    int k=1;
    for(int i=1; i<=5;i++){
        for(int j=1; j<=i;j++){
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}

/*

1
23
456
78910
1112131415

*/