#include <stdio.h>
int reverse(int n, int a[])
{
    int i;
    for (i = 0; i < n / 2; i++)
    {
        int h = a[i];
        a[i] = a[(n - 1) - i];
        a[(n - 1) - i] = h;
    }
}
int main()
{
    int n, a[n], i;
    printf("enter the no. elements in an array:\n");
    scanf("%d", &n);
    printf("enter the  elements in an array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements in an array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("After reversing the elements in an array.\n");
    reverse(n, a);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
