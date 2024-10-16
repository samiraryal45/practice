#include <stdio.h>

int main()
{

    int subject;
    
    printf("Enter the subject you have passed \n""1.Math\n""2.Science\n""3.Math & Science\n"
    "Enter 4 if you failed in both subjects\n");
    
    scanf("%d",&subject);


if (subject==1||subject==2)
{
    printf("You get Rs.15");
}

else if (subject==3)

    {
   printf("You get Rs.45");
   
}
   else{
    printf("Better luck next time");
   }

    return 0;
}
