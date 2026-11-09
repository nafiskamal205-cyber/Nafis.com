// Program to calculate CGPA based on marks
#include <stdio.h>
int main()
{
    float mark;

    printf("\033[1m");
    printf("UIU Grading System\n");
    printf("\033[0m");

    printf("Enter your mark: ");
    scanf("%f", &mark);

    if (mark >=90.0 && mark <= 100.0)  // Check if mark is between 90 and 100
    {
        printf("You got (A) and your CGPA is 4.0\n");
    }

    else if (mark >=86.0 && mark <= 89.0)  // Check if mark is between 86 and 89
    {
        printf("You got (A-) and your CGPA is 3.67\n");
    }
    else if (mark >=82.0 && mark <= 85.0)  // Check if mark is between 82 and 85
    {
        printf("You got (B+) and your CGPA is 3.33\n");
    }
    else if (mark >=78.0 && mark <= 81.0)  // Check if mark is between 78 and 81
    {
        printf("You got (B) and your CGPA is 3.00\n");
    }
    else if (mark >=74.0 && mark <= 77.0)  // Check if mark is between 74 and 77
    {
        printf("You got (B-) and your CGPA is 2.67\n");
    }
    else if (mark >=70.0 && mark <= 73.0)  // Check if mark is between 70 and 73
    {
        printf("You got (C+) and your CGPA is 2.33\n");
    }
    else if (mark >=66.0 && mark <= 69.0)  // Check if mark is between 66 and 69
    {
        printf("You got (C) and your CGPA is 2.00\n");
    }
    else if (mark >=62.0 && mark <= 65.0)  // Check if mark is between 62 and 65
    {
        printf("You got (C-) and your CGPA is 1.67\n");
    }
    else if (mark >=58.0 && mark <= 61.0)  // Check if mark is between 58 and 61
    {
        printf("You got (D+) and your CGPA is 1.33\n");
    }
    else if (mark >=55.0 && mark <= 57.0)  // Check if mark is between 55 and 57
    {
        printf("You got (D) and your CGPA is 1.00\n");
    }
    else if (mark >=0.0 && mark <= 54.0)  // Check if mark is between 0 and 54
    {
        printf("You got (F) means you failed and your CGPA is 0.0\n");
    }
    else
    {
        printf("Invalid Mark!\n"); // Handle invalid marks
    }

    return 0;
}


