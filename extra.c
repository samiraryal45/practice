#include <stdio.h>

int main()
{
    int n[6];
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Number %d :", i + 1);
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (n[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {

            odd_count++;
        }
    }
for (int i = 0; i < 6; i++)
{
    if (n[i]%2==0)
    {
        printf("%d",n[i]);
    }
    
}
printf("\n");
for (int i = 0; i < 6; i++)
{
    if (n[i]%2!=0)
    {
        printf("%d",n[i]);
    }
    
}
printf("\n");

    printf("even count :%d\n", even_count);
    printf("odd count :%d\n", odd_count);

    return 0;
}
