#include <stdio.h>

int main(void)
{
  int num,rem,tot,buffer;
  printf("Enter a number to check if it is armstrong number: \n" );
  scanf("%d",&num);
  buffer = num;
  tot =0;
  while (num!=0) {
    rem = num%10;
    tot = tot + (rem*rem*rem);
    num = num/10;
  }
  if (buffer==tot) {
    printf("%d is an armstrong number\n",buffer);
  }
  else{
    printf("%d is not a armstrong number\n",buffer );
  }
  return 0;

}
