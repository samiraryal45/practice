#include <stdio.h>


int main()
{
    int n;
    printf("enter the no. of numbers you want to enter.\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements.\n");
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
    
}
int  small=a[0],large=a[0];

for (int i = 0; i < n; i++)
{
   
if (small>a[i])
{
    small=a[i];
}
if (large<a[i])
{
    large=a[i];
}


}
    printf("The smallest no. in the array is %d\n",small);
    printf("The largest no. in the array is %d\n",large);


    return 0;
}
