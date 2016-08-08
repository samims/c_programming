/*
Write a program to accept 
two values a & b and interchange 
their values in C language
*/

#include<stdio.h>
int main(void)
{
  int a,b,buffer;

  printf("Enter two integer number: \n");
  scanf("%d%d",&a,&b);
  buffer = a;
  a = b;
  b = buffer;
  printf("a = %d and b = %d\n",a,b );

  return 0;
}