#include<stdio.h>
/*
    % = is the placeholder symbol for output interpolation
    %d = represents the integer values in base 10 decimal
    %s = string
    %f = Floating point value
    %c = single characters
    %% = the percent sign
*/
int main()
{
    printf("My favorite number is %d\n", 5);
    printf("I like these numbers too: %d, %d, %d\n", 8, 7, 9);
    printf("You are a %c %s\n", 'C', "Programmer");
    return(0);
}