#include <stdio.h>
#define PI 3.1416

int main()
{
    float A, r;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    A = PI * r * r;
    printf("Area of circle is %f\n", A);
    return 0;
}