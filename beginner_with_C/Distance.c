#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,distance;

    printf("Enter x1 and y1: ");
    scanf("%f %f",&x1,&y1);

    printf("Enter x2 and y2: ");
    scanf("%f %f",&x2,&y2);

    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    printf("Distance between two points: %.2f\n",distance);

    return 0;

}
