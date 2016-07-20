#include <stdio.h>

int main(int argc, char const *argv[]) {
  char hello[] = "Greetings, human!\n";

  int n ;
  n= 0;

  while (hello[n]!='\0') {
    putchar(hello[n]);
    putchar('\n');
    n++;
  }
  return 0;
}
