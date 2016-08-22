#/*
Write a Program to print numbers n to 1 using Do While
 loop in C language
 */

 #include <stdio.h>

 int main(void){
  int i,n;
  i=0;
  printf("Enter the limit:\n");
  scanf("%d",&n);
  do {
    printf("The number is: %d\n",i );
    ++i;
  } while(i<=n);

  return 0;
 }
