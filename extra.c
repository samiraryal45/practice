#include <stdio.h>

int prime(int n)
{
    if (n <= 1)
    {
        printf("%d is not a prime number.\n", n);
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d is not a prime number.\n", n);
                return 0;
            }
        }
        printf("%d is  a prime number.\n", n);
    }
}
int main()
{
    int n;
    printf("enter the number: \n");
    scanf("%d", &n);
    prime(n);
    return 0;
}
