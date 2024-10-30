#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter the value of x:\n");
    scanf("%f", &x);
    printf("Enter the value of y:\n");
    scanf("%f", &y);
    double z = (double)x / (double)y;
    printf(" x divided by y is %.20f\n", z);
    return 0;
}
