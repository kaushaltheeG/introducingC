#include<stdio.h>

/*
    scanf()

    def: standard input function that can catch a variety of data types
    notes: 
        - lives within the stdio.h
        - reads specific data types from standard input
        - assigns values to a variable
        - uses printf() placeholders
        - uses the "&"(address-of) operator
    usage: scanf("format", &var)
        - format => is a text-formatting string which determines the type of input requested
            - uses placeholders like %d, %s, %c, etc
        - var is a declared variable in the code
            - "&" operator prefixes the variable
            - "&" is not required to prefix a string or array
    
    Not useful for String or Array inputs
*/

int main() {
    int x;
    float y;
    char c;

    printf("Type an integer, any number, & character\n");
    scanf("%d", &x);
    scanf("%f", &y);
    scanf("%c", &c);
    printf("Integer is %d, Any number is %f, & Char of %c \n", x, y, c);

    return(0);
}