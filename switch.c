#include <stdio.h>

int main()
{
    int price;


    printf("Enter the price tag\n");
    scanf("%d",&price);

switch (price)
{
case 1200:
     printf("Your price is Rs.1200");
    break;

default:
if (price>1200)
{
    printf("Your price is above Rs.1200");
}
else if (price<1200)
{
    printf("Your price is below Rs.1200");
}








    
    break;
}

    return 0;
}
