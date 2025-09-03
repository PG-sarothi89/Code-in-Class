#include<stdio.h>

int main (){
    int a = 5,b=10;

    printf("Initial value of a: %d\n", a);
    printf("Initial value of b: %d\n", b);

    a++;
    printf("After incrementing a: %d\n", a);

    a--;
    printf("After decrementing a: %d\n", a);

    printf("After incrementing b: %d\n", ++b);
    printf("After decrementing b: %d\n", --b);

    printf(" the value of a++ + b is: %d\n", a++ + b);

    return 0;
}
