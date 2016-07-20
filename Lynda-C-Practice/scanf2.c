#include <stdio.h>

int main(int argc, char const *argv[]) {
  char name[15]; /* 14 character's [lace*/

  printf("Your name ?  " );
  scanf("%s",name );
  printf("You are %s.\n", name);

  return 0;
}
