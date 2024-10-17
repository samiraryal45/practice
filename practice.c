
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
    int i, age;
    for (i = 0; i < 50; i++)
    {
        printf(" %d\n Enter your age\n", i);
        scanf("%d", &age);

        if (age > 10)
        {
            break;
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 4;
    float b = (float)57 / 8;
    printf("Tne value of b is: %f\n", b);
    return 0;
}
#include <stdio.h>
int sum(int a, int b)

{
    return a + b;
}
int main()
{
    int a, b, c;
    a = 50000 * 5;
    b = 5;
    c = sum(a, b);
    printf("The sum is %d\n", c);
    return 0;
}
#include <stdio.h>

int areaofsquare(int l)
{
    int area;
    area = l * l;
    return area;
}
int main()
{
    int l = 500;
    int area = areaofsquare(l);
    printf("The area of square is %d\n", area);
    return 0;
}
#include <stdio.h>

int volumeofcuboid(int l, int b, int h)
{

    int volume;
    volume = l * b * h;
    return volume;
}

int main()
{
    int l, b, h, volume;
    l = 15;
    b = 10;
    h = 6;
    volume = volumeofcuboid(l, b, h);

    printf("The volume of cuboid is %d\n", volume);

    return 0;
}
#include <stdio.h>

int perimeterofcircle(int r)
{
    int perimeter;
    perimeter = 2 * 22 / 7 * r;
    return perimeter;
}

int main()
{

    int r, perimeter;

    r = 5;
    perimeter = perimeterofcircle(r);

    printf("The perimeter of circle is %d\n", perimeter);

    return 0;
}
#include <stdio.h>

float densityofbody(float m, float v)
{

    float density;
    density = m / v;
    return density;
}
int main()
{
    float m, v, density;
    m = 8;
    v = 6;
    density = densityofbody(m, v);

    printf("The density of the body is %f\n", density);
    return 0;
}
#include <stdio.h>
void printstar(int n)

{
    for (int i = 0; i < n; i++)
    {

        printf("%c\n", '*');
    }
}
int main()
{

    printstar(7);

    return 0;
}
#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter the value of a and b:\n");
    scanf("%f%f", &a, &b);
    printf("The division of %f and %f is %f", a, b, a / b);
    return 0;
}

#include <stdio.h>



int number()
{
  int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
  return a;
}
int main()
{

  int c;
  c =number();
  printf("The number enterred is:%d\n",c);

    return 0;
}