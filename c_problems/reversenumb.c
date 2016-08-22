//reverse a given number
#include <stdio.h>

int main(void)
{
  int num, rev, rem;
  rev = 0;
  printf("Enter an integer:\n", );
  scanf("%d",&num );

  while (num != 0) {
    rem = num%10;
    rev = rev*10 +rem;
    num = (num/10);
  }
  printf("Reversed number is:\n",rev );

  return 0;
}
