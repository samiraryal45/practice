#include <stdio.h>

int main()
{
    int a[3][3], i, j, k;
    printf("enter the elements of a matrix.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("transpose of the matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            k = a[j][i];
            printf("%d\t", k);
        }
        printf("\n");
    }

    return 0;
}
