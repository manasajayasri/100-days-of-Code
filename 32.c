#include<stdio.h>
int main(int argc, char const *argv[])
{
    int quan;
    float unitPrice;
    printf("Enter the quantity & Price: ");
    scanf("%d%f",&quan,&unitPrice);

    printf("\n");
    printf("The Quantity is %d and the price is %f",quan,unitPrice);


    return 0;
}
