#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the no. of elements in an array.\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements in the array.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements in the array are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("The negative elements in the array are:\n");
    for (i = 0; i < n; i++)
    {

        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
