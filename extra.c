#include <stdio.h>

int main()
{
    int a = 5;
    float b = 5.5;
    double c = 5.5;
    char d = '5';
    printf("size of int :%ld\n", sizeof(a));
    printf("size of  float :%ld\n", sizeof(b));
    printf("size of double :%ld\n", sizeof(c));
    printf("size of character :%ld\n", sizeof(d));

    return 0;
}
