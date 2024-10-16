

#include<stdio.h>
int main()
{
  int a;
  printf("Enter which Subject you passed\n");
  printf("Enter 1 if you passed maths\n");
  printf("Enter 2 if you passed science\n");
  printf("Enter 3 if you passed both math and science\n");
  printf("Enter 4 if you failed both math and science\n");
  scanf("%d",&a);
  if(a==3)
  {
    printf("Congratulations You won Rs.45\n");
    
  }
  else if(a==2||a==1)
  {
    printf("Congratulations You won Rs.15\n");
    
  }
  else
  {
    printf("Better luck next time\n");
  }
  
}