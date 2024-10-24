
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
    scanf("%d", &a);
    return a;
}
int main()
{

    int c;
    c = number();
    printf("The number enterred is:%d\n", c);

    return 0;
}
#include <stdio.h>

int number()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    return a;
}
int main()
{

    int c;
    c = number();
    printf("The number enterred is:%d\n", c);

    return 0;
}
#include <stdio.h>

void helloji()

{

    printf("My name is:");
}

int main()
{
    helloji();
    printf("Samir ARYAL");
    return 0;
}

int product()

{

    int a = 24, b = 70;
    return a * b;
}

int main()
{

    int p;
    p = product();
    printf("The product is %d\n", p);
    return 0;
}
#include <stdio.h>

int difference(int a, int b)
{

    int difference;
    difference = a - b;
}
int main()
{
    int a = 10, b = 5, d;
    d = difference(a, b);
    printf("The difference is %d\n", d);
    return 0;
}
#include <stdio.h>

int factorial(int number)

{
    if (number == 1 || number == 0)
    {
        return 1;
    }

    else
    {

        return (number * factorial(number - 1));
    }
}

int main()
{

    int num;
    printf("Enter the number you want the factorial of :\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}
#include <stdio.h>

int main()
{

    int input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    printf("Enter the conversion you want\n"
           " 1. kmtoMiles\n"
           " 2.inchestoFoot\n  "
           " 3.cmstoInches\n "
           " 4. None\n");
    scanf("%d", &input);

    if (input == 1)
    {

        printf("Enter the first conversion unit");
        scanf("%f", &first);
        second = first * kmsToMiles;
        printf("%f kms is equal to %f MIles", first, second);
    }

    else if (input == 2)
    {
        second = first * inchesToFoot;
        printf("Enter the first conversion unit");
        scanf("%f", &first);

        printf("%f kms is equal to %f MIles", first, second);
    }

    else if (input == 3)
    {

        printf("Enter the first conversion unit");
        scanf("%f", &first);
        second = first * cmsToInches;
        printf("%f kms is equal to %f MIles", first, second);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    float pounds, kgs, poundstokgs;
    poundstokgs = 0.453592;

    printf("Enter the value in pounds you want t0 convert into kgs\n");
    scanf("%f", &pounds);
    printf("%.2f pounds is equal to %.2f kgs", pounds, pounds * poundstokgs);
    return 0;
}
#include <stdio.h>

int main()
{
    int marks[50] = {5, 10, 15, 20, 25, 40, 50, 70, 80, 30, 12, 20, 30, 55, 67, 68, 67, 23, 45, 58, 89, 90, 89, 99};

    for (int i = 1; i < 20; i++)
    {
        printf("The marks obtained by roll no. %d is %d\n ", i, marks[i]);
    }
}

#include <stdio.h>
int main()
{

    int marks[2][3] = {{45, 86, 81},
                       {56, 76, 98}};

    for (int i = 1; i < 4; i++)
    {

        for (int j = 1; j < 3; j++)
        {
            printf("The marks of roll no. %d of class %d is %d\n", i, j, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{

    int marks[2][3] = {{45, 68, 51},
                       {98, 54, 75}};

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("The marks obtained by roll no. %d of %d class is %d\n", j, i, marks[i][j]);
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a = 5;
    int *b = &a;
    printf("The address of a is %p\n ", &b);
    printf("The address of a is %p\n ", &a);
    printf("The value of a is %d\n", *b);
    printf("The value of a is %d\n", a);

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[] = {5, 6, 7, 8, 7, 2, 6, 88, 5};
    int *a = &arr[3];
    printf("%p\n", &a);
    printf("%d\n", arr[1]);

    return 0;
}

#include <stdio.h>

int hi(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at position %d is %d\n", i, array[i]);
    }
}

int main()
{

    int arr[] = {5, 6, 7, 8, 9, 922, 44, 56, 3}, array;
    hi(array);

    return 0;
}
#include <stdio.h>

void starPattern(int rows)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{

    int rows;

    printf("rows=\n");
    scanf("%d", &rows);
    starPattern(rows);

    return 0;
}
#include <stdio.h>

int array(int arr[])
{

    int h;
    for (int i = 0; i < 7 / 2; i++)
    {
        h = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = h;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++)
    {
        printf(" %d\n", arr[i]);
    }

    array(arr);
    printf("After reversing\n");
    for (int i = 0; i < 7; i++)
    {
        printf(" %d\n", arr[i]);
    }

    return 0;
}

#include <stdio.h>

float areaoftrapezium(float l1, float l2, float h)
{

    float trapezium;
    trapezium = ((l1 + l2) * h) / 2;
    return trapezium;
}
int main()
{
    float l1, l2, h, trapezium;
    l1 = 3.4;
    l2 = 4.5;
    h = 8;
    trapezium = areaoftrapezium(l1, l2, h);
    printf("The area of the required traprzium is %.2f\n", trapezium);
    return 0;
}

#include <stdio.h>

struct MAN
{
    int percentage;
    float gpa;
    char character;
};

int main()
{
    struct MAN SamirAryal = {92, 3.82, 'X'};
    printf("The percentege obtained by Mr. Samir Aryal in the Secondary Education Examination is %d.\n", SamirAryal.percentage);
    printf("The Grade Point Average(GPA) obtained by Mr. Samir Aryal in the Secondary Education Examination is %.2f.\n", SamirAryal.gpa);
    printf("The favourite caharater of Mr. Samir Aryal is %c.\n", SamirAryal.character);

    return 0;
}
#include <stdio.h>

struct Drivers
{
    
    int Drivinglicenceno;
    
    float kms;
};

int main()
{

    int num;

    printf("Enter the respective numbers to get your details:\n  1=d1\n 2=d2\n 3=d3\n 4=d4\n 5=d5\n ");
    scanf("%d", &num);
    struct Drivers d1 =  {8810, 220.56}, d2 = { 4456, 201.5}, d3 = { 9648,  205.68}, d4 = {5973, 208.56}, d5 = {3875,  120.67};

    if (num == 1)
    {

        char name[] = {"Suresh Chapagain"};
        char route[] = {"KTM to CHITWAN"};
        printf("The details of the driver d1 are:\n 1.Name=%s\n 2.Driving Licence no.:%d\n 3.Respective route:%s\n 4.Total distance drove till date:%.2f\n", name, d1.Drivinglicenceno, route, d1.kms);
    }

    else if (num == 2)
    {

        char name[] = {"Samir Ghising"};
        char route[] = {"KTM to POKHARA"};
        printf("The details of the driver d2 are:\n 1.Name=%s\n 2.Driving Licence no.:%d\n 3.Respective route:%s\n 4.Total distance drove till date:%.2f\n", name, d2.Drivinglicenceno, route, d2.kms);
    }

    else if (num == 3)
    {

        char name[] = {"Samir Ghising"};
        char route[] = {"KTM to POKHARA"};
        printf("The details of the driver d1 are:\n 1.Name=%s\n 2.Driving Licence no.:%d\n 3.Respective route:%s\n 4.Total distance drove till date:%.2f\n", name, d3.Drivinglicenceno, route, d3.kms);
    }

    else if (num == 4)
    {
        char name[] = {"Samir Ghising"};
        char route[] = {"KTM to POKHARA"};
        printf("The details of the driver d1 are:\n 1.Name=%s\n 2.Driving Licence no.:%d\n 3.Respective route:%s\n 4.Total distance drove till date:%.2f\n", name, d4.Drivinglicenceno, route, d4.kms);
    }

    else if (num == 5)
    {
        char name[] = {"Samir Ghising"};
        char route[] = {"KTM to POKHARA"};

        printf("The details of the driver d1 are:\n 1.Name=%s\n 2.Driving Licence no.:%d\n 3.Respective route:%s\n 4.Total distance drove till date:%.2f\n", name, d5.Drivinglicenceno, route, d5.kms);
    }

    return 0;
}
