/* Letter Conversion Program using toupper and tolower (Library) functions */
#include <stdio.h>
#include <ctype.h>  //Here we include the ctype.h header file to use the toupper function

int main()
{
    
    char lower, upper;

    // Declare variables to store the lowercase and uppercase letters
    printf("Enter a lowercase letter: ");
    scanf("%c", &lower);

    upper = toupper(lower);  //Here we use the toupper function to convert the lowercase letter to uppercase
    printf("The uppercase letter is: %c\n", upper);

    // Now we will convert an uppercase letter to lowercase
    printf("Enter an uppercase letter: ");
    scanf(" %c", &upper);

    lower = tolower(upper);  //Here we use the tolower function to convert the uppercase letter to lowercase
    printf("The lowercase letter is: %c\n", lower);

    return 0;
}
