#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any letter: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
       printf("This is a small letter\n");
    }

    else if(ch>='A' && ch<='Z')
    {
      printf("This  is a capital letter\n");
    }

    else
     printf("No letter\n");

    return 0;

}
