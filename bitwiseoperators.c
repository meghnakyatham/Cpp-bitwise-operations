#include <stdio.h>

int main(){
    unsigned char a = 5, b = 9;
    printf("a = %d, b = %d \n", a,b);
    printf("a&b = %d \n", a&b);
    
    printf("a|b = %d \n", a|b);

    printf("a^b = %d \n", a^b);

    printf("a<<2 = %d \n", a<<2);

    printf("~b = %d \n", ~b);

    printf("b<<1 = %d \n", b<<1);
    return 0;
}