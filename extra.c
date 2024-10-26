#include <stdio.h>

int multiply(int x){
    int a=10 *x;
    
    return a;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    multiply(n);
    printf("The ten times its value is %d\n",multiply(n));
    return 0;
}
