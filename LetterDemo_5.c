// Program to check whether the given letter is vowel or consonant by using switch case
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any Letter: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("This is vowel\n");
            break;
        default:
            printf("This is consonant\n");
    }
    return 0;
}
