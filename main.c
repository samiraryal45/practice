#include <stdio.h>

void neon(int n){
    int square = n*n;
    int digit,sum=0;
    while (square !=0)
    {
        digit =square %10;
        sum +=digit;
        square /=10;
    }
    if (sum==n)
    {
        printf("%d is a neon number.\n",n);
    }
    else{
        printf("%d is not a neon number.\n",n);

    }
    
    
}
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    neon(n);
    return 0;
}
