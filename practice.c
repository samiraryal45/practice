
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

        return (number * fact(number - 1));
    }
}

int main()
{

    int num;
    printf("Enter the number you want the factorial of :\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, fact(num));

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
    struct Drivers d1 = {8810, 220.56}, d2 = {4456, 201.5}, d3 = {9648, 205.68}, d4 = {5973, 208.56}, d5 = {3875, 120.67};

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
#include <stdio.h>

int main()
{
    int n, p1, p2, p3;
    printf("Enter the percentage you secured in the examination:\n");
    scanf("%d", &n);
    printf("Enter the percentage you secured in mathematics:\n");
    scanf("%d", &p1);
    printf("Enter the percentage you secured in physics:\n");
    scanf("%d", &p2);
    printf("Enter the percentage you secured in computer science:\n");
    scanf("%d", &p3);

    if (n > 90 && n >= 100)
    {
        printf("Congratulations you obtained grade A+ in the examination\n");
    }

    else if (n <= 100 && n >= 40)
    {
        printf("Congratulations you passed the examination\n");
    }

    else if (n > 40)
    {
        printf("You failed the examination.Better luck next time!\n");
    }

    if (p1 > 33 && p1 <= 100)
    {
        printf("Congratulations you passed in mathematics in the examination\n");
    }

    else if (p1 < 33)
    {
        printf("You failed in mathematics examination.Better luck next time!\n");
    }

    if (p2 > 33 && p2 <= 100)
    {
        printf("Congratulations you passed in physics in the examination\n");
    }

    else if (p2 < 33)
    {
        printf("You failed in physiscs examination.Better luck next time!\n");
    }

    if (p3 > 33 && p3 <= 100)
    {
        printf("Congratulations you passed in computer science in the examination\n");
    }

    else if (p3 < 33)
    {
        printf("You failed in computer science examination.Better luck next time!\n");
    }

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
    struct Drivers d1 = {8810, 220.56}, d2 = {4456, 201.5}, d3 = {9648, 205.68}, d4 = {5973, 208.56}, d5 = {3875, 120.67};

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

        char name[] = {"turi"};
        char route[] = {"KTM to ghandhruk"};
        printf("The details of the driver d3 are:\n 1.Name=%s\n 2.Driving Licence no.:%d\n 3.Respective route:%s\n 4.Total distance drove till date:%.2f\n", name, d3.Drivinglicenceno, route, d3.kms);
    }

    else if (num == 4)
    {
        char name[] = {"Aayush Chapagain"};
        char route[] = {"KTM to POKHARA"};
        printf("The details of the driver d5 are:\n 1.Name=%s\n 2.Driving Licence no.:%d\n 3.Respective route:%s\n 4.Total distance drove till date:%.2f\n", name, d4.Drivinglicenceno, route, d4.kms);
    }

    else if (num == 5)
    {
        char name[] = {"Aashutosh Loda"};
        char route[] = {"KTM to POKHARA"};

        printf("The details of the driver d5 are:\n 1.Name=%s\n 2.Driving Licence no.:%d\n 3.Respective route:%s\n 4.Total distance drove till date:%.2f\n", name, d5.Drivinglicenceno, route, d5.kms);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int y;
    printf("Enter the year :\n");
    scanf("%d", &y);
    if (y % 4 == 0 && y % 100 == 0 && y % 400 == 0)
    {
        printf("This is a leap year\n");
    }
    else
    {
        printf("This is not a leap year\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabet you want in lowercase or uppercase:\n");
    scanf("%c", &ch);
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
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);
    printf("Enter d:\n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest number is %d\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest number is %d\n", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("The greatest number is %d\n", d);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Write the number you want the multiplication table of :\n");
    scanf("%d", &n);
    printf("The table is as follows:\n");

    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d =%d\n", n, i, n * i);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum is %d", sum);
    return 0;
}

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum is %d", sum);
    return 0;
}
#include <stdio.h>

int main()
{
    int n = 1;
    while (n < 10)
    {
        printf("8\n");
        n++;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number as an input:\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("This is controversial\n");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("This is not a prime number\n");
                return 0;
            }
        }
        printf("This is a prime number\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    const int MIN = 1;
    const int MAX = 100;
    int guess = 0;
    int guesses = 0;
    int answer = 0;

    // uses the current time as a seed
    srand(time(0));

    // generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("**********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**********************");

    return 0;
}

#include <stdio.h>

int main()
{
    float r, pie = 3.14, area;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);
    area = pie * r * r;
    printf("The area of the circle is %.2f", area);
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    if (n == 1 || n % 2 != 0)
    {
        printf("This is a odd number.\n");
    }
    else
    {
        printf("This is a even number.\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, c, average;

    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("Enter the value of c:\n");
    scanf("%d", &c);
    average = (a + b + c) / 3;
    printf("The average of the numbers is %d\n", average);
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
    int n, area;

    printf("Enter the value of l:\n");
    scanf("%d", &n);
    area = areaofsquare(n);
    printf("The area of square is %d\n", area);
    return 0;
}
#include <stdio.h>

int fact(int n)
{

    int v = 1;
    for (int i = n; i > 1; i--)
    {
        v *= i;
    }
    return v;
}
int main()
{
    int n;
    printf("Enter the number you want the factorial of :\n");
    scanf("%d", &n);
    fact(n);
    printf("The factorial  is %d\n", fact(n));
    return 0;
}
#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    printf("ENTER THE NUMBER OF TERMS UPTO THE FIBONACCI SERIES:\n");
    scanf("%d", &n);
    printf("The fibonacci series upto %d terms is:\n", n);
    fibonacci(n);
    return 0;
}
#include <stdio.h>

int multiply(int x)
{
    int a = 10 * x;

    return a;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    multiply(n);
    printf("The ten times its value is %d\n", multiply(n));
    return 0;
}
#include <stdio.h>

int main()
{
    char str[] = {"Hello, World!"};

    // Loop through each character in the string until we hit the null terminator
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n"); // Print a newline after the loop
    return 0;
}
#include <stdio.h>
void printstars(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 3 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the no. of rows you want your pattern at:\n");
    scanf("%d", &n);
    printstars(n);
    return 0;
}
#include <stdio.h>

void sumVector(int vector1[2], int vector2[2], int result[2])
{
    result[0] = vector1[0] + vector2[0];
    result[1] = vector1[1] + vector2[1];
}

int main()
{
    int vector1[2] = {1, 2};
    int vector2[2] = {3, 4};
    int result[2];

    sumVector(vector1, vector2, result);

    printf("Sum of vectors: [%d, %d]\n", result[0], result[1]);
    return 0;
}
#include <stdio.h>

typedef struct
{
    double real;
    double imag;
} Complex;

void displayComplex(Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main()
{
    Complex c1 = {3.0, 4.0}; // Initialize a complex number
    displayComplex(c1);      // Display the complex number

    return 0;
}
#include <stdio.h>

int main()
{
    int rows;
    printf("\n");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

void reverse(int arr[])
{

    for (int i = 0; i < 8 / 2; i++)
    {
        int h = arr[i];
        arr[i] = arr[7 - i];
        arr[7 - i] = h;
    }
}

int main()
{
    int arr[8] = {22, 45, 6, 7, 8, 9, 23, 45};
    int i;

    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("After reversing\n");
    reverse(arr);

    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a[10] = {0}, n, r;
    printf("Enter the nmber:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        if (a[r] == 1)
        {
            break;
        }
        else
        {
            a[r] = 1;
        }
        n /= 10;
    }
    if (n > 0)
    {
        printf("there are  repetition");
    }
    else
    {
        printf("there are  no repetition");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[] = {4, 5, 5, 6, 6, 6, 7, 7, 3, 2, 11, 3, 5, 6, 7, 7, 8, 8, 9, 9, 9, 9, 0, 0, 4, 3, 2, 3, 4, 6, 7, 8, 9, 9, 0, 7, 6, 5, 4, 3, 2, 1, 2, 4, 5, 6, 6, 6, 7, 4, 4, 4, 4, 5, 5, 5};
    printf("%ld\n", sizeof(a) / sizeof(a[40]));
    return 0;
}
#include <stdio.h>

int main()
{
    int a[10][10];
    int ar, ac;

    printf("Enter the no. of rows and columns of matrix a\n");
    scanf("%d %d", &ar, &ac);

    printf("enter the element of matrix a:\n");

    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[10][10];
    int br, bc;

    printf("Enter the no. of rows and columns of matrix b\n");
    scbnf("%d %d", &br, &bc);

    printf("enter the element of matrix b:\n");

    for (int i = 0; i < br; i++)
    {
        for (int j = 0; j < bc; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int product[10][10];
    int sum = 0;
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; i < bc; j++)
        {
            for (int k = 0; i < br; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);

    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter the first n natural numbers:\n");
    scanf("%d", &n);
    do
    {

        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}

#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter the value of x:\n");
    scanf("%f", &x);
    printf("Enter the value of y:\n");
    scanf("%f", &y);
    double z = (double)x / (double)y;
    printf(" x divided by y is %.20f\n", z);
    return 0;
}

#include <stdio.h>

int main()
{
    int num, reversed = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0)
    {
        remainder = num % 10;                 // Get the last digit
        reversed = reversed * 10 + remainder; // Append the digit to reversed
        num /= 10;                            // Remove the last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
#include <stdio.h>
void factorial(int n);
int main()
{
    int n;
    printf("enter the value for n:\n");
    scanf("%i", &n);
    factorial(n);
    return 0;
}
void factorial(int n)
{

    int v = 1;
    for (int i = 1; i <= n; i++)
    {
        v *= i;
    }
    printf("The factorial of %i is %i\n", n, v);
}
#include <stdio.h>

void number(int a, int b);
int main()
{
    int a, b;
    number(a, b);
    return 0;
}
void number(int a, int b)
{
    int n;
    printf("enter the value of n:\n");
    scanf("%i", &n);
    printf("enter the value of a:\n");
    scanf("%i", &a);
    printf("enter the value of b:\n");
    scanf("%i", &b);

    if (n % a == 0)
    {
        printf("The number is divisible by a but not b.\n");
    }
    else
    {
        printf("The number is divisible by b but not a.\n");
    }
}
#include <stdio.h>

void stars(int n);
int main()
{
    int n;
    printf("enter the value for n:\n");
    scanf("%i", &n);
    stars(n);
    return 0;
}
void stars(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include <stdio.h>

void oddeven(int n);
int main()
{
    int n;
    printf("enter the value of n:\n");
    scanf("%i", &n);
    oddeven(n);
    return 0;
}
void oddeven(int n)
{

    if (n == 1 || n % 2 != 0)
    {
        printf("this number is odd\n");
    }
    else
    {
        printf("this is even number\n");
    }
}
#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the first number:\n");
    scanf("%i", &a);
    printf("enter the second number:\n");
    scanf("%i", &b);

    if (a > b)
    {
        printf("The smallest number is %i\n", b);
    }
    else
    {
        printf("The smallest number is %i\n", a);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char a;
    printf("write the character:\n");
    scanf("%c", &a);
    if (a >= 97 && a <= 122 || a >= 65 && a <= 91)
    {
        printf("The character provided as a input is not a digit.\n");
    }
    else
    {
        printf("The character provided as a input is  a digit.\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char a;
    printf("Enter the character :\n");
    scanf("%c", &a);
    if (a >= 65 && a <= 91)
    {
        printf("This is a uppercase character.\n");
    }
    else
    {
        printf("This is a lowercase character.\n");
    }

    return 0;
}
#include <stdio.h>
int fact(int n)
{
    int v = 1;

    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {

        for (int i = 2; i <= n; i++)
        {
            v *= i;
        }
        return v;
    }
}
int main()
{
    int n;
    printf("enter the number which you want the factorial of:\n");
    scanf("%d", &n);
    int factorial = fact(n);
    printf("The factorial of %d is %d\n", n, factorial);
    return 0;
}
#include <stdio.h>

int add(int n);
int main()
{
    int n;
    printf("Enter the number upto which you want the sum of natural numbers:\n");
    scanf("%i", &n);
    int sum = add(n);
    printf("The sum upto %i natural numbers is %i. \n", n, sum);
    return 0;
}

int add(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the numebr which you want the multiplication table of:\n");
    scanf("%i", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%i * %i = %i\n", n, i, n * i);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%i\n", i);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    for (int i = 5; i < 50; i = i + 1)
    {
        if (i % 2 != 0)
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
#include <stdio.h>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    printf("enter the number which you want the factorial of:\n");
    scanf("%i", &n);
    int factorial = fact(n);
    printf("The factorial of %i is %i\n.", n, factorial);
    return 0;
}
#include <stdio.h>
void odd();
void even();
int n = 1;

int main()
{
    odd();
    return 0;
}

void odd()
{
    if (n <= 10)
    {

        printf("%d\n", n + 1);
        n++;
        even();
    }
}
void even()
{

    if (n <= 10)
    {
        printf("%d\n", n - 1);
        n++;
        odd();
    }
}
#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("The sum of the numbers from 5 to 50 including themselves is %i\n", sum);

    return 0;
}
#include <stdio.h>

void printstar(int n);

int main()
{
    int n;
    printf("Enter the no. of lines you want the star to be printed:\n");
    scanf("%i", &n);
    printstar(n);
    return 0;
}
void printstar(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include <stdio.h>
void prime(int n)
{

    if (n == 1)
    {
        printf("It is  not prime number");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("It is not a prime number.\n");
                return;
            }
        }
        printf("It is a prime number");
    }
}
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%i", &n);
    prime(n);
    return 0;
}
#include <stdio.h>

int is_prime(int num)
{
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; // num is divisible by i, not prime
    }
    return 1; // num is prime
}

int main()
{
    int start, end;

    // Input the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
void average(float a, float b, float c)
{
    float avg = (a + b + c) / 3;
    printf("The average of the three input values is %.2f\n", avg);
}
int main()
{
    float a, b, c;
    printf("enter the value of a:\n");
    scanf("%f", &a);
    printf("enter the value of b:\n");
    scanf("%f", &b);
    printf("enter the value of c:\n");
    scanf("%f", &c);
    average(a, b, c);
    return 0;
}
#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter the temperature in celsus:\n");
    scanf("%f", &c);
    f = 9 * c / 5 + 32;
    printf("The respective scale of %.2f celsius is %.2f fahrenheit.\n", c, f);
    return 0;
}
#include <stdio.h>

int recursivesum(int n)
{

    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + recursivesum(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter the first n numbers to calculate the sum:\n");
    scanf("%d", &n);
    int sum = recursivesum(n);
    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}

#include <stdio.h>

int main()
{
    int table[10];

    // Store multiplication table of 5 in the array
    for (int i = 0; i < 10; i++)
    {
        table[i] = 5 * (i + 1);
    }

    // Print the multiplication table
    printf("Multiplication Table of 5:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n", i + 1, table[i]);
    }

    return 0;
}
#include <stdio.h>

void primenumbers(int a, int b)
{

    for (int i = a; i < b; i++)
    {
        if (b % a == 0)
        {
            printf("%i\n", i);
        }
    }
}
int main()
{
    int a, b;
    printf("enter the first range of number:\n");
    scanf("%i", &a);
    printf("enter the second range of number:\n");
    scanf("%i", &b);
    primenumbers(a, b);

    return 0;
}
#include <stdio.h>

void reverse(int arr[])
{
    for (int i = 0; i < 10 / 2; i++)
    {
        int h = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = h;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Before reversing:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("After reversing:\n");
    reverse(arr);
    return 0;
}
#include <stdio.h>

int main()
{
    int table[3][10] = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20},
                        {7, 14, 21, 28, 35, 42, 49, 56, 63, 70},
                        {9, 18, 27, 36, 45, 54, 63, 72, 81, 90}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int table[3][10];
    for (int i = 0; i < 10; i++)
    {

        table[0][i] = 2 * (i + 1);
        table[1][i] = 7 * (i + 1);
        table[2][i] = 9 * (i + 1);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// C Program for Checking value is
// Prime or not
// #include <stdbool.h>
#include <stdio.h>

int main()
{
    int n = 3;

    int cnt = 0;

    // If number is less than/equal to 1,
    // it is not prime
    if (n <= 1)
        printf("%d is NOT prime\n", n);
    else
    {

        // Check for divisors from 1 to n
        for (int i = 1; i <= n; i++)
        {

            // Check how many number is divisible
            // by n
            if (n % i == 0)
                cnt++;
        }

        // If n is divisible by more than 2 numbers
        // then it is not prime
        if (cnt > 2)
            printf("%d is NOT prime\n", n);

        // else it is prime
        else
            printf("%d is prime", n);
    }

    return 0;
}
#include <stdio.h>

void numbers(int n)
{
    if (n > 0)
    {
        printf("The number entered is positive.\n");
    }
    else if (n < 0)
    {
        printf("The number entered is negative.\n");
    }
    else
    {
        printf("The number entered is zero.\n");
    }
}
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    numbers(n);
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The number entered is even");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char n;
    printf("enter a character.\n");
    scanf("%c", &n);
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')

    {
        printf("The character entered is vowel.\n");
    }
    else
    {
        printf("The character entered is consonant.\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("enter the n natural  numbers.\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum upto %d natural numbers is %d\n", n, sum);
    return 0;
}
#include <stdio.h>

int main()
{
    printf("The alphabets are :\n");
    for (char i = 65; i <= 90; i++)
    {

        printf("%c ", i);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the year:\n");
    scanf("%d", &n);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    {
        printf("%d is a leap year.\n", n);
    }
    else
    {
        printf("%d is not a leap year.\n", n);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the year:\n");
    scanf("%d", &n);

    if (n % 400 == 0)
    {
        printf("%d is a leap year.\n", n);
    }
    else if (n % 100 == 0)
    {
        printf("%d is not a leap year.\n", n);
    }
    else if (n % 4 == 0)
    {
        printf("%d is a leap year.\n", n);
    }
    else
    {
        printf("%d is not a leap year.\n", n);
    }

    return 0;
}

// C Program to make a Simple Calculator using
// switch-case statements
#include <stdio.h>
#include <float.h>

int main()
{
    char op;
    double a, b, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    // Define all four operations in the corresponding
    // switch-case
    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Error! Incorrect Operator Value\n");
        res = -DBL_MAX;
    }
    if (res != -DBL_MAX)
        printf("%.2lf", res);

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number which you want the multiplication table of:\n");
    scanf("%d", &n);
    printf("The multiplication table of %d is as follows:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n;
    printf("Enter the n no. of terms of fibonacci series.\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter two numbers.\n");
    scanf("%d %d", &a, &b);
    c = (a > b) ? a : b;
    while (1)
    {
        if (c % a == 0 && c % b == 0)
        {
            printf("The lcm of %d and %d is %d \n", a, b, c);
            break;
        }
        c++;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a  number.\n");
    scanf("%d", &n);
    int a = 0;
    while (n > 0)
    {
        a = a * 10 + n % 10;
        n /= 10;
    }
    printf("The reversed number is %d\n", a);
    return 0;
}
#include <stdio.h>

int reverse(int n)
{

    int a = 0;
    while (n > 0)
    {
        a = a * 10 + n % 10;
        n /= 10;
    }
    return a;
}

int palindrome(int n)
{
    if (n == revers(n))
    {
        printf("The entered number is palindrome.\n");
    }
    else
    {
        printf("The entered number is not palindrome.\n");
    }
}
int main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);
    palindrome(n);
    return 0;
}
#include <stdio.h>
int prime(int n)
{

    if (n <= 1)
    {
        printf("error\n");
    }
    else
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d is not a prime number.\n", n);
                return 0;
            }
        }
        printf("%d is  a prime number.\n", n);
    }
}
int main()
{
    int n;
    printf("Enter a  number.\n");
    scanf("%d", &n);

    prime(n);
    return 0;
}
#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int lower, upper;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    for (int i = lower; i <= upper; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    return 0;
}
#include <stdio.h>

void neon(int n)
{
    int square = n * n;
    int digit, sum = 0;
    while (square != 0)
    {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }
    if (sum == n)
    {
        printf("%d is a neon number.\n", n);
    }
    else
    {
        printf("%d is not a neon number.\n", n);
    }
}
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d", &n);
    neon(n);
    return 0;
}
#include <stdio.h>

int main()
{
    int n, rev_num;
    printf("enter a number.\n");
    scanf("%d", &n);
    printf("The reverse of %d is\n", n);

    while (n != 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n /= 10;
    }
    printf("%d \n", rev_num);

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter a natural number.\n");
    scanf("%d", &n);
    printf("The factors of %d are ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n;
    int sum = 0;
    printf("enter n no. of terms .\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += a;
            c = a + b;
            a = b;
            b = c;
        }
        else
        {
            return;
        }
    }
    printf("The sum upto %d fibonaccin terms is %d\n", n, sum);
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of lines you want the pyramid pattern to be printed:\n");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of rows for pyramid:\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of rows for triangle:\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of rows for  inverted pyramid:\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < n - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
// C program to print
// inverted pyramid
// pattern
#include <stdio.h>

// Driver code
int main()
{
    int rows = 8, i, j, space;

    for (i = rows; i >= 1; --i)
    {
        // Loop to print the blank space
        for (space = 0;
             space < rows - i; ++space)
            printf(" ");

        // Loop to print the half of
        // the star triangle
        for (j = i; j <= 2 * i - 1; ++j)
            printf("* ");

        // Loop to print the rest of
        // the star triangle
        for (j = 0; j < i - 1; ++j)
            printf("* ");
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
// C program to illustrate the above
// given pattern of numbers.
#include <stdio.h>

int main()
{
    int n = 4, i, j, num = 1, gap;

    gap = n - 1;

    for (j = 1; j <= n; j++)
    {
        num = j;

        for (i = 1; i <= gap; i++)
            printf(" ");

        gap--;

        for (i = 1; i <= j; i++)
        {
            printf("%d", num);
            num++;
        }
        num--;
        num--;
        for (i = 1; i < j; i++)
        {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <= n - i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    char a = '1';
    printf("enter the no. of lines:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
        a++;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    char a = 'A';
    printf("enter the no. of rows:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of lines or rows:\n");
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 1; k < n - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= 2 * i; j++)
        {

            if (j == 0 || j == 2 * i)

                printf("*");

            else

                printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
// C Program to Demonstrate
// a Hollow Star Pyramid
#include <stdio.h>

int main()
{
    int i, space, n = 5, j = 0;

    // first for loop is used to
    // iterate number of rows
    for (i = 0; i < n - 1; i++)
    {

        // second for loop is used to print spaces
        for (space = 1; space < n - i; space++)
        {
            printf(" ");
        }
        // third for loop is used
        // to print the required
        // pattern
        for (j = 0; j <= 2 * i; j++)
        {
            if (j == 0 || j == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        // print the new line after every row
        printf("\n");
    }
    // used to print last row
    for (i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of lines you want the stars to be printed:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= n * 2 - (2 * i - 1); k++)
        {
            if (k == 0 || i == 0)
            {
                printf("*");
            }
            else if (k == n * 2 - (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of lines or rows:\n");
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 1; k < n - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= 2 * i; j++)
        {

            if (j == 0 || j == 2 * i)

                printf("*");

            else

                printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int prime(int n)
{
    if (n <= 1)
    {
        printf("%d is not a prime number.", n);
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d is not a prime number.", n);
                return 0;
            }
        }
        printf("%d is a prime number.", n);
    }
}
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d", &n);
    prime(n);
    return 0;
}
#include <stdio.h>

int main()
{
    int s, l, prime;
    ;
    printf("enter the starting range of interval:\n");
    scanf("%i", &s);
    printf("enter the ending range of interval:\n");
    scanf("%i", &l);
    printf("Prime numbers between %d and %d are:\n", s, l);

    for (int i = s; i <= l; i++)
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int s, l, prime;
    ;
    printf("enter the starting range of interval:\n");
    scanf("%i", &s);
    printf("enter the ending range of interval:\n");
    scanf("%i", &l);
    printf("Prime numbers between %d and %d are:\n", s, l);

    for (int i = s; i <= l; i++)
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int x, y;
    printf("enter the value of x:\n");
    scanf("%d", &x);
    printf("enter the value of y:\n");
    scanf("%d", &y);
    printf("After swaping.\n");
    x = x + y;
    y = x - y;
    x = x - y;
    printf("The value of x is %d\n ", x);
    printf("The value of y is %d\n ", y);

    return 0;
}
#include <stdio.h>

int main()
{
    int days, months, week, remainder;
    printf("enter the number of days:\n");
    scanf("%d", &days);
    months = days / 30;
    remainder = days % 30;
    week = remainder / 7;
    remainder = remainder % 7;
    printf("%d days = %d months , %d weeks and %d days", days, months, week, remainder);
    return 0;
}
#include <stdio.h>

int main()
{
    int n, digits, sum = 0;
    printf("enter a number to find to sum of it's digits.\n");
    scanf("%d", &n);
    printf("The sum of the digits of %d is ", n);

    while (n != 0)
    {
        digits = n % 10;
        n /= 10;
        sum += digits;
    }
    printf("%d.", sum);

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter a year.\n");
    scanf("%d", &n);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    {
        printf("%d is a leap year.", n);
    }
    else
    {
        printf("%d is not a leap year.", n);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int c;
    printf("Enter a value:\n");
    c = getchar();
    printf("You entered:");
    putchar(c);
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the values of a,b and c.\n");
    scanf("%d%d%d", &a, &b, &c);
    d = a > b ? b : a;
    d = d > c ? c : d;
    printf("The smallest number among %d, %d and %d is %d\n", a, b, c, d);
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the values of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("AND:%d\n", a & b);
    printf("OR:%d\n", a | b);
    printf("NAND:%d\n", ~(a & b));

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 5;
    float b = 5.5;
    double c = 5.5;
    char d = '5';
    printf("size of int :%ld\n", sizeof(a));
    printf("size of  float :%ld\n", sizeof(b));
    printf("size of double :%ld\n", sizeof(c));
    printf("size of character :%ld\n", sizeof(d));

    return 0;
}
#include <stdio.h>

int main()
{
    int r1, r2, i1, i2, d1, d2;
    printf("enter the real and imaginary part of fist complex number:\n");
    scanf("%d%d", &r1, &i1);
    printf("enter the real and imaginary part of second complex number:\n");
    scanf("%d%d", &r2, &i2);
    d1 = r1 - r2;
    d2 = i1 - i2;
    printf("The difference between %d %d c.m. and %d %d c.m. is %d %d c.m.", r1, i1, r2, i2, d1, d2);
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c, min;
    printf("enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && c > b)
    {
        printf("The smallest number among %d , %d and %d is %d", a, b, c, b);
    }
    else if (b > a && c > a)
    {
        printf("The smallest number among %d , %d and %d is %d", a, b, c, a);
    }
    else
    {
        printf("The smallest number among %d , %d and %d is %d", a, b, c, c);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    float a[5];
    printf("enter the numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &a[i]);
    }
    printf("The numbers entered are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]=%.2f\n", i, a[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[10], i, n, large = a[0], small = a[0];
    printf("enter the no. of elements of an array:\n");
    scanf("%d", &n);
    printf("enter the elements of an array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (small > a[i])
        {
            small = a[i];
        }
        if (large < a[i])
        {
            large = a[i];
        }
    }

    printf("The small number in the array is %d\n", small);
    printf("The largest number in the array is %d\n", large);

    return 0;
}
#include <stdio.h>

int main()
{
    int a[3][3], i, j, k;
    printf("enter the elements of a matrix.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("transpose of the matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            k = a[j][i];
            printf("%d\t", k);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3];
    printf("enter the elements of the first matrix:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the elements of the second matrix:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The matrix obtained after adding two matices A and B is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[2][3];
    printf("enter the elements:");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n;
    printf("enter the no. of terms of fibonacci series:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of lines you want the stars to be printed:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * n; k++)
        {
            if (k == 0 || k == 2 * i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("* ");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, a[n];
    printf("enter the elements of an array.\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements in the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("element %d :%d\n", i, a[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the no. of elements in an array.\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements in the array.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements in the array are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("The negative elements in the array are:\n");
    for (i = 0; i < n; i++)
    {

        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int reverse(int n)
{
    int a=0;
    while (n>0)
    {
        a=a*10 +n %10;
        n /=10;
    }
    return a;
}


int main()
{
    int n;
    printf("enter a number.\n");
    scanf("%d", &n);
    int rev =revers(n);
    printf("The reverse of %d is %d.\n",n,rev);
    return 0;
}
#include <stdio.h>

int main()
{
    int rows1, columns1, rows2, columns2;
    int matrix1[10][10], matrix2[10][10], result[10][10];
    printf("enter the rows and columns of the first matrix :\n ");
    scanf("%d %d", &rows1, &columns1);
    printf("enter the elements of the first matrix.\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("enter the rows and columns of the second matrix :\n ");
    scanf("%d %d", &rows2, &columns2);
    
    printf("enter the elements of the second matrix.\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }

        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
            printf("\n");
        }
        printf("The resultant matrix is:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                printf("%d ", result[i][j]);
            }
        }

        return 0;
    }
}
#include <stdio.h>

int main()
{
    int n[6];
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Number %d :", i + 1);
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (n[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {

            odd_count++;
        }
    }
    printf("even numbers:\n");
for (int i = 0; i < 6; i++)
{
    if (n[i]%2==0)
    {
        printf("%d",n[i]);
    }
    
}
printf("\n");
    printf("odd numbers:\n");

for (int i = 0; i < 6; i++)
{
    if (n[i]%2!=0)
    {
        printf("%d",n[i]);
    }
    
}
printf("\n");

    printf("even count :%d\n", even_count);
    printf("odd count :%d\n", odd_count);

    return 0;
}
#include <stdio.h>


int main()
{
    int n=0;
    while (n<=5)
    {
        int i=0;
       while ( i<=n)
       {
         printf("*");
        i++;
       }
       printf("\n");
       n++;
    }
    
    return 0;
}
