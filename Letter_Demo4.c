// Program to check whether a character is a vowel or consonant
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any Letter: ");
    scanf("%c",&ch);

    if(ch =='a' || ch == 'e' || ch =='i' || ch =='o' || ch =='u' ||
       ch =='A' || ch == 'E' || ch =='I' || ch =='O' || ch =='U')   // check for vowel

       printf("This is vowel\n");

    else   // if it is not a vowel
      printf("This is consonant\n");

    return 0;
}
