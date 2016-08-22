#include<stdio.h>
int main(void)
{
  int i,j,n;
  printf("Enter number: \n" );
  scanf("%d",&n);

  for ( i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      putchar('*');
    }
    putchar('\n');

  }

  return 0;
}
