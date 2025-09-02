
// Class Date : 02/09/2005

// #include <stdio.h>

// int main()
// {

//     int a, b, c;
//     a = 10;
//     b = 15;

//     printf("Result of a>b is %d\n", a > b);
//     return 0;
// }

/*#include <stdio.h>
int main()
{

    int a, b, c, result;
    a = 10;
    b = 15;
    c = 20;
    result = (a > b) || (c > a);
    printf("Result of logical OR is %d\n", result);

    return 0;
}
    */


    #include <stdio.h>
int main()
{

    int a, b, c, result;
    a = 10;
    b = 15;
    c = a & b ;

    printf("Bitwise operator is %d\n", c);

    return 0;
}