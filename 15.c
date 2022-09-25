#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i<=10; i++){

        for(int j = 1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


/*

1
12
123
1234
12345
123456
1234567
12345678
123456789
12345678910

*/