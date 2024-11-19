#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of lines you want the stars to be printed:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * n; k++)
        {
            if (k == 0 || k == 2 * i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("* ");
    }

    return 0;
}