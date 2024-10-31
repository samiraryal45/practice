#include <stdio.h>

int main()
{
    char str[] = {"Hello ji"};

    // Loop through each character in the string until we hit the null terminator
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n"); // Print a newline after the loop
    return 0;
}