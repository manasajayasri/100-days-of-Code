#include<stdio.h>
int main(void)
{
    int a, index=0;
    printf("Enter a number:");
    scanf("%d",&a);

    do{
        index = index + 1;
        printf("%d\n",index );
    } while (index < a);
    
    return 0;
}
