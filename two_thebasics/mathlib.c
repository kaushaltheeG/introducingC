#include<stdio.h>
#include<math.h>

/* 
    header file => math.h
    Operators included are pow(^), sqrt, etc

    Use floating-point values
    double vars required over float
        - double carries twice the precision of float
*/

int main() 
{
    float p;

    p = pow(2.0,8.0); // base, power
    printf("2 to the power of 8 is %f\n", p);
    return(0);
}
