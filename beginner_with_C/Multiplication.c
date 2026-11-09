// Program to print the multiplication table of a number
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);  // take the number as input

    for (int i = 1; i <= 10; i++)  // repeat from 1 to 10
    {
        printf("%d x %d = %d\n", n, i, n * i);  // print multiplication result
    }

    return 0;
}
