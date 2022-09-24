#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i = 1; i<=3; i++){
        static int x = 1;
        x++;
        printf("The value of x in iteration %d is: %d\n",i,x);

    }
    return 0;
}
