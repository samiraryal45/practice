#include <stdio.h>

int main()
{
    int i,age;
    for ( i = 0; i < 50; i++)
    {
        printf(" %d\n Enter your age\n",i);
        scanf("%d",&age);

        if (age>10)
        {
            break;
        }
        
    }
    
    return 0;
}
