#include <stdio.h>

void oddeven(int n);
int main()
{
    int n;
    printf("enter the value of n:\n");
    scanf("%i", &n);
    oddeven(n);
    return 0;
}
void oddeven(int n)
{

    if (n == 1 || n % 2 != 0)
    {
        printf("this number is odd\n");
    }
    else 
    {
        printf("this is even number\n");
        
    }
    

    
}