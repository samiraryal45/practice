#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabet you want in lowercase or uppercase:\n");
    scanf("%c",&ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("This is lowercase alphabet");
    }
    else
    {
        printf("This is a uppercase alphabet");
    }
    return 0;
}
