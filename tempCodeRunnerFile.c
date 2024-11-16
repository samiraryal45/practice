#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the values of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("AND:%d\n", a & b);
    printf("OR:%d\n", a | b);
    printf("NAND:%d\n", ~(a & b));

    return 0;
}
