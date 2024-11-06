#include <stdio.h>

void numbers(int n)
{
    if (n > 0)
    {
        printf("The number entered is positive.\n");
    }
    else if (n < 0)
    {
        printf("The number entered is negative.\n");
    }
    else
    {
        printf("The number entered is zero.\n");
    }
}
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    numbers(n);
    return 0;
}
