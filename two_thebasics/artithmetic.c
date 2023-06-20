#include<stdio.h>

int main()
{
    /* use floats when doing dvision */
    int a;
    int b = 5;
    int k;

    printf("Input an Interger: \n");
    scanf("%d", &a);
    printf("%d - %d = %d\n", a, b, a-b);

    k = 25 / 5 * 2 + 3;
    printf("The answer for k is %d\n", k);
    return(k);
}