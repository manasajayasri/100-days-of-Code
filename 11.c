/* #include<stdio.h>
int main(void){
for(int j = 1; j<=5; j++){
    for(int i = 1; i<=5; i++){
        printf("%d",i);
    }                                               
    printf("\n");
}

    return 0;
}

Will print 

12345
12345
12345
12345
12345

*/

#include<stdio.h>
int main(void){
for(int j = 1; j<=5; j++){
    for(int i = 1; i<=5; i++){
        printf("%d",j);
    }
    printf("\n");
}

    return 0;
}

/* 
11111
22222
33333
44444
55555 */