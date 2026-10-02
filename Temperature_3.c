#include <stdio.h>
int main()
{
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if(temp < 0)
    {
        printf("Freezing weather\n");
    }
    else if(temp < 10)
    {
        printf("Very cold weather\n");
    }
    else if(temp < 20)
    {
        printf("Cold weather\n");
    }
    else if(temp < 30)
    {
        printf("Normal in temp\n");
    }
    else if(temp < 40)
    {
        printf("It's hot\n");
    }
    else
    {
        printf("It's very hot\n");
    }
}
