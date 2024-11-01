#include <stdio.h>


int main()
{
    char a;
    printf("Enter the character :\n");
    scanf("%c",&a);
    if (a>=65 &&  a<=91)
    {
      printf("This is a uppercase character.\n");
    }
    else
    {
      printf("This is a lowercase character.\n");
      
    }
    
    return 0;
}
