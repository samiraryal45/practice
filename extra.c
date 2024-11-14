#include <stdio.h>

int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    printf("enter the fibonacci terms.\n");
    scanf("%d", &n);
    printf("The series of number upto %d fibonacci series is :\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    printf("\n");
    printf("\n");




    return 0;
}
