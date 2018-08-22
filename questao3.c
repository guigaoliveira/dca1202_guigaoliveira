#include <stdio.h>

int main(void)
{
  int i = 5, *p;
  p = &i;
  printf("%x %d %d %d %d", p, *p + 2, **&p, 3 * *p, **&p + 4);
  // se o endereço de i é 4094: FFE, 5+2 = 7, 5, 3 * 5 = 15, 5 + 4 = 9
}