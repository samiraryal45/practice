
#include <stdio.h>
void main()
{
    int i = 1, p;
    do
    {
        p = 5 * i;
        printf("\n5 *%d =%d ", i, p);
        i++;
    } while (i <= 10);
}
#include <stdio.h>
int main()
{
    int a, b;

    a = 1;
    b = 0;
    printf("a&&b=%d\n", a && b);
    printf("a-b=%d\n", a - b);
    printf("a*b=%d\n", a * b);
    printf("a/b=%d\n", a / b);

    return 0;
}

#include <stdio.h>

int main()
{

    printf("Hello world \x19 hi hi");
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;

    a = 1;
    b = 0;
    printf("a&&b=%d\n", a && b);
    printf("a-b=%d\n", a - b);
    printf("a*b=%d\n", a * b);
    printf("a/b=%d\n", a / b);

    return 0;
}
#include <stdio.h>

int main()
{

    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    if (a < 2)
    {
        printf("I lOVE YOU");
    }
    else if (a = 5)
    {
        printf("FUCK YOU");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int price;

    printf("Enter the price tag\n");
    scanf("%d", &price);

    switch (price)
    {
    case 1200:
        printf("Your price is Rs.1200");
        break;

    default:
        if (price > 1200)
        {
            printf("Your price is above Rs.1200");
        }
        else if (price < 1200)
        {
            printf("Your price is below Rs.1200");
        }

        break;
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter which Subject you passed\n");
    printf("Enter 1 if you passed maths\n");
    printf("Enter 2 if you passed science\n");
    printf("Enter 3 if you passed both math and science\n");
    printf("Enter 4 if you failed both math and science\n");
    scanf("%d", &a);
    if (a == 3)
    {
        printf("Congratulations You won Rs.45\n");
    }
    else if (a == 2 || a == 1)
    {
        printf("Congratulations You won Rs.15\n");
    }
    else
    {
        printf("Better luck next time\n");
    }
}

#include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%i", &n);
        sum += n;
    } while (n != 0);
    printf("Sum is = %d", sum);

    return 0;
}

#include <stdio.h>
int main()
{

    int age, num = 5;

    printf("Enter your age:");
    scanf("%d", &age);

    do
    {
        printf("%d\n", num + 5);
        num = num + 5;
    } while (num <= age);

    return 0;
}
#include <stdio.h>

int main()
{
    int i = 5;

    while (i < 50)
    {
        printf("%d\n", i);
        i = i + 5;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int x;
    for (x = 0; x <= 60; x++)
    {
        printf("%d\n", x);
    }

    return 0;
}
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
