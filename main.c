#include <stdlib.h>

void my_putchar(char *c) {
  write(1, &c, 1);
}

void main() {
  return 0;
}
