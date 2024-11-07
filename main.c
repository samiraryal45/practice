#include <stdio.h>
void primenumbers(int a, int b)
{

    for (int i = a; i < b; i++)
    {
        if (b % a == 0)
        {
            printf("%i\n", i);
        }
    }
}
int main()
{
    int a, b;
    printf("enter the first range of number:\n");
    scanf("%i", &a);
    printf("enter the second range of number:\n");
    scanf("%i", &b);
    primenumbers(a, b);

    return 0;
}