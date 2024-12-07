#include <stdio.h>


int main()
{
    int n;
printf("enter the number which you want the multiplicaton table of:\n");
scanf("%d",&n);
printf("The multiplication table of %d is as follows:\n",n);
for (int i = 1; i <=10; i++)
{
    printf("%d * %d = %d\n",n,i,n*i);
}

    return 0;
}
