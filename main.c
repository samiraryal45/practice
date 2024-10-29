#include <stdio.h>


int main()
{
    int n;
    int i=1;
    printf("Enter the first n natural numbers:\n");
    scanf("%d",&n);
    do
    {
        
        printf("%d\n",i);
        i++;    
    } while ( i<=n);
    
    return 0;}

