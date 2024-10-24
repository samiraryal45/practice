#include <stdio.h>


int main()
{
    int a,b,c,d;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    printf("Enter d:\n");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("The greatest number is %d\n",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("The greatest number is %d\n",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("The greatest number is %d\n",c);
    }
     else if (d>b && d>c && d>a)
    {
        printf("The greatest number is %d\n",d);
    }
    
    return 0;
}
 