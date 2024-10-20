int main()
{
    int num, km,cm;
    char ch;
    float miles,metre,inches,foot,kg,pounds;
    label:

    printf("Enter 1 to convert Kilometers to miles\n ");
    printf("Enter 2 to convert Inches to foot \n");
    printf("Enter 3 to convert Centimeter to inches \n");
    printf("Enter 4 to convert Pounds to Kilograms\n");
    printf("Enter 5 to convert Inches to meters\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Enter distance in KM to convert it into Miles\n ");
        scanf("%d", &km);
        miles = km / (float)1.609;
        printf("%d KM is equal to %f miles\n", km, miles);
      
    }
    else if (num == 2)
      {
            printf("Enter Length in inInches  to convert it into foot \n ");
            scanf("%f", &inches);
            foot = inches/ (float)12;
            printf("%f inches is equal to %f foot\n", inches, foot);
      }
      return 0; 
}