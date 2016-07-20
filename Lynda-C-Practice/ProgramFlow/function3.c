#include <stdio.h>

void cheers(void);

int main(int argc, char const *argv[]) {
  int x = 21;
  puts("Everyone gets free dinner!");
  cheers();
  puts("Everyone gets free dessert!");
  cheers();
  printf("%d\n",x);
  puts("Everyone pays higher taxes!\n");
  return 0;
}

void cheers(void) {
  int x;

  for(x = 0;x<3;x++)
  {
    printf("Huzzah!\n" );
    return;
    putchar('\n');
  }
}
