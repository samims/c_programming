/* wap to print sum of given first n number */
#include<stdio.h>

int main()
{
  int num,newnum=0,i=0;
  printf("Enter a number to get sum upto the number:");
  scanf("%d",&num);

  do {
    newnum = newnum +i;
    i++;
  } while(i<=num);

  printf("The sum upto %d is: %d\n",num,newnum );

  return(0);
}
