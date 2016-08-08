#include <stdio.h>
int main(void)
{
  float a,r;
  printf("Enter the radius");
  scanf("%f",&r);
  a = (22/7)*r*r;
  printf("The area is %6.2f:",a );

  return 0;
}
