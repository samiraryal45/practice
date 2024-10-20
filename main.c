#include <stdio.h>

int main()
{
    float pounds ,kgs,poundstokgs;
         poundstokgs=0.453592;


printf("Enter the value in pounds you want t0 convert into kgs\n");
scanf("%f",&pounds);
printf("%.2f pounds is equal to %.2f kgs",pounds,pounds * poundstokgs);
    return 0;
}
