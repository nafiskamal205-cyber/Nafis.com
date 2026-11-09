// Program to calculate GPA based on marks
#include <stdio.h>
int main()
{
    float mark;

    printf("Enter your mark: ");
    scanf("%f", &mark);

    if (mark >=80.0 && mark <= 100.0)  // Check if mark is between 80 and 100
    {
        printf("You got (A+) and your GPA is 5.0\n");
    }

    else if (mark >=70.0 && mark < 80.0)  // Check if mark is between 70 and 79.99
    {
        printf("You got (A) and your GPA is 4.5\n");
    }
    else if (mark >=60.0 && mark < 70.0)  // Check if mark is between 60 and 69.99
    {
        printf("You got (A-) and your GPA is 4.0\n");
    }
    else if (mark >=50.0 && mark < 60.0)  // Check if mark is between 50 and 59.99
    {
        printf("You got (B) and your GPA is 3.5\n");
    }
    else if (mark >=40.0 && mark < 50.0)  // Check if mark is between 40 and 49.99
    {
        printf("You got (C) and your GPA is 3.0\n");
    }
    else if (mark >=33.0 && mark < 40.0)  // Check if mark is between 33 and 39.99
    {
        printf("You got (D) and your GPA is 2.5\n");
    }
    else if (mark >=0.0 && mark < 33.0)   // Check if mark is between 0 and 32.99
    {
        printf("You got (F) means you failed and your GPA is 0.0\n");
    }
    else
    {
        printf("Invalid Mark!\n"); // Handle invalid marks
    }

     return 0;

}
