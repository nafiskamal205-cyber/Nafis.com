#include <stdio.h>
int main()
{
    float x, y;

    printf("Enter the value of x and y:");
    scanf("%f %f", &x, &y);

    if(x > 0 && y > 0)
    {
        printf("The point lies in quadrant 1.\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("The point lies in quadrant 2.\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("The point lies in quadrant 3.\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("The point lies in quadrant 4.\n");
    }
    else if(x == 0 && y == 0)
    {
        printf("The point lies at the origin.\n");
    }
    else if(x == 0)
    {
        printf("The point lies on the y-axis.\n");
    }
    else if(y == 0)
    {
        printf("The point lies on the x-axis.\n");
    }
    return 0;
}
