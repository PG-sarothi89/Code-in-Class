#include <stdio.h>
#define PI 3.1416

int main()
{
    int A, r;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    A = PI * r * r;
    printf("Area of circle is %d\n", A);
    return 0;
}