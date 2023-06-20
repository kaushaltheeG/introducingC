#include<stdio.h>

/*
    Strings
        def: it is an array of char variables
            - enclosed in double quotes
            - the final character of the string is the null character, \0
                - \0 is the character escape sequence
        Declaring: char {stringname}[]
            - square brackets are empty if immediately assigned
            - square brackets require the size plus one for the null char

*/

int main() 
{
    char password[] = "heehehe";
    char name[15];
    char input[64]; /* remove for 63 and null char*/

    printf("The password is %s\n", password);
    
    printf("Your name is ");
    // not recommened => if the input overflows the string, program will abort
    scanf("%s", name);
    printf("Name is %s\n", name);

    // Recommended
    printf("Instructions: ");
    fgets(input, 64, stdin); // the var, space, and file to read from (stdin => standard input)
    puts("Thank you for the instructions");
    puts(input);

    return(0);
}