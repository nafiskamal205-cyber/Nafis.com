#include <stdio.h>
int main()
{
    int id;
    float hours,amountPerHour,salary;

    printf("Enter employee id: ");
    scanf("%d",&id);

    printf("Enter total working hours in a month: ");
    scanf("%f",&hours);

    printf("Enter amount per hour: ");
    scanf("%f",&amountPerHour);

    salary = hours * amountPerHour;

    printf("Employee ID: %d\n",id);
    printf("Salary: %.2f\n",salary);

    return 0;

}
