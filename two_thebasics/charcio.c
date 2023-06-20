#include<stdio.h>

/*
    getchar is a stream output so input have more than 2 char inputws but only accpets the forst two
*/

int main()
{
    int c;
    printf("type a letter...\n");
    c = getchar(); // gets uses input from terminal
    printf("Input's char code is %d and the char is '%c'\n", c, c); // '%c' used to convert charcode int to char
    putchar(c);
    putchar('\n');
    return(0);
}