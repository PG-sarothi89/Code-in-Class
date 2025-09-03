#include<stdio.h>

int main (){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Equal\n");
    }
    if (a != b) {
        printf("Not Equal\n");
    }
    if (a > b) {
        printf("Greater\n");
    }
    if (a < b) {
        printf("Lesser\n");
    }
    if (a >= b) {
        printf("Greater or Equal\n");
    }
    if (a <= b) {
        printf("Lesser or Equal\n");
    }

    return 0;
}