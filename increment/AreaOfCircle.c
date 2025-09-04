#include <stdio.h>

int main()
{
    int A, r;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    A = 3.1416 * r * r;
    printf("Area of circle is %d\n", A);
    return 0;
}