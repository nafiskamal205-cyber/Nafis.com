#include<stdio.h>
int main()
// This program takes an ASCII value as input and displays the corresponding character, and vice versa
{
    int n;
    printf("Enter any ASCII value: ");
    scanf("%d",&n);
    printf("The character is: %c\n",n);
    
    char ch;
    printf("Enter any character: ");
    scanf(" %c",&ch);
    printf("The ASCII value is: %d\n",ch);
    return 0;
}
