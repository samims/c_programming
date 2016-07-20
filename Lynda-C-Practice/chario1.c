#include <stdio.h>

int main()
{
  int c;
  printf("\nType a letter:" );
  c = getchar();
  printf("\nYou typed '");
  putchar(c);
  putchar('\'');
  putchar('.');
  putchar('\n');

  return 0;
}
