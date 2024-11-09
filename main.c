#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <=n-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++)
        {
            printf("%d ",i);
            i--;
        }
        printf("\n");
    }

    return 0;
}
