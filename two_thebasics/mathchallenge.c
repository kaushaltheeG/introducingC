#include<stdio.h>
#include<math.h>

int main()
{
    float a, b;

    printf("Enter floating number for a: ");
    scanf("%f", &a);
    printf("Enter floating number34 for b: ");
    scanf("%f", &b);

    printf("Adding %f + %f = %f\n", a, b, a + b);
    printf("Subtracting %f - %f = %f\n", a, b, a - b);
    printf("Multiplying %f x %f = %f\n", a, b, a * b);
    printf("Dividing %f / %f = %f\n", a, b, a / b);
    printf(" %f^%f = %f\n", a, b, pow(a,b));
    printf("squareroot of %f & %f are %f & %f\n", a, b, sqrt(a), sqrt(b));
    return(0);
}