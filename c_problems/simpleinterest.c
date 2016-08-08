#include<stdio.h>

int main(void)
{
  float p,n,r,tot;
  printf("Enter the principle,year and rate of interest respectively:  \n");
  scanf("%f%f%f",&p,&n,&r );
  tot =(p*n*r)/100;
  printf("Your interest is: %.2f\n",tot );
  return 0;
}
