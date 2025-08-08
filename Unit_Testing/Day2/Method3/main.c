#include<stdio.h>
#include "demo.h"


int main(){
    int a = 10, b = 20,c,d,e,f,g;
    c = sum(a,b);
    d = square(a);
    e = product(a, b);
    f = diff(a, b);
    g = division(a, b);

    printf("Sum is : %d\n", c);
    printf("Square is : %d\n", d);
    printf("Product is : %d\n", e);
    printf("Difference is : %d\n", f);
    printf("Divivsion is : %d\n", g);
    return 0;
}