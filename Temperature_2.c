#include <stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;
    printf("Enter your choice: \n");

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f",&temp);
            convertedTemp = (temp * 9/5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", temp, convertedTemp);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f",&temp);
            convertedTemp = (temp - 32) * 5/9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", temp, convertedTemp);
            break;

        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
