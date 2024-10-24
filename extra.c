#include <stdio.h>

int main()
{
    int n,p1,p2,p3;
    printf("Enter the percentage you secured in the examination:\n");
    scanf("%d",&n);
    printf("Enter the percentage you secured in mathematics:\n");
    scanf("%d",&p1);
    printf("Enter the percentage you secured in physics:\n");
    scanf("%d",&p2);
    printf("Enter the percentage you secured in computer science:\n");
    scanf("%d",&p3);

    if (n>90 && n>=100)
    {
        printf("Congratulations you obtained grade A+ in the examination\n");
    }

    else if (n<=100 && n>=40)
    {
         printf("Congratulations you passed the examination\n");
    }

    
    else if (n>40)
    {
         printf("You failed the examination.Better luck next time!\n");
    }
    


    
     if (p1>33 && p1<=100)
    {
         printf("Congratulations you passed in mathematics in the examination\n");
    }
    


    else if (p1<33)
    {
         printf("You failed in mathematics examination.Better luck next time!\n");
    }
    


     if (p2>33 && p2<=100)
    {
         printf("Congratulations you passed in physics in the examination\n");
    }
    


    else if (p2<33)
    {
         printf("You failed in physiscs examination.Better luck next time!\n");
    }

     if (p3>33 && p3<=100)
    {
         printf("Congratulations you passed in computer science in the examination\n");
    }
    


    else if (p3<33)
    {
         printf("You failed in computer science examination.Better luck next time!\n");
    }
    
    


    return 0;
}
