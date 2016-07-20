#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b;

  printf("Type two letter\n" );
  a = getchar();
  b = getchar();
  printf("You typed '" );
  putchar(a);
  printf("' and  '" );
  putchar(b);
  printf("'.\n" );
  return 0;

}
