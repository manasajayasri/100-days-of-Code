#include<stdio.h>
void fun(void);               //fun dec1
static int x = 1;
int main(void){                 //fun dec2
    for(int i=1; i<=3; i++)
        x++;
        printf("Vale of x in main is:%d\n",x);
        fun();
        printf("Value of x again in main is:%d\n",x);

        return 0;

    }

    void fun(void){
        x++;
        printf("Value of x in fun is:%d\n",x);
        return;

    }
