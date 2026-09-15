#include <stdio.h>
int main()
{
    int choice;
    float num1, num2;

    printf("===Menu===\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if(num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;

}
