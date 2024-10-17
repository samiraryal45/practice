#include <stdio.h>

int volumeofcuboid(int l,int b, int h)
{

  int volume;
  volume= l*b*h;
  return volume;
}

int main()
{
  int l,b,h,volume;
  l=15;
  b=10;
  h=6;
  volume=volumeofcuboid(l,b,h);

  printf("The volume of cuboid is %d\n",volume);

  return 0;
}
