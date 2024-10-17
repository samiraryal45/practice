
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