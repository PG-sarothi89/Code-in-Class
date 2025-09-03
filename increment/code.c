#include<stdio.h>
int main(){
    int a,b,c;
    a=10,b=2;
    c= ++a+b++;
    printf("The value of ++a + b++ is %d\n", c);

    return 0;
}