
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

