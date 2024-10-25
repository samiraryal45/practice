#include <stdio.h>


int main()
{
    int n;
    printf("Enter the number as input:\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("This is controversial");
    }
    else if (n %2==0)
    {
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }
    
    
    return 0;
}
