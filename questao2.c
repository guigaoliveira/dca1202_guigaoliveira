#include <stdio.h>

int main(void)
{
  int i = 3, j = 5;
  int *p, *q;
  p = &i;
  q = &j;
  printf("p == &i: %d \n", p == &i);                // true
  printf("*p - *q: %d \n", *p - *q);                // 2 - 5 = - 2
  printf("**&p: %d \n", **&p);                      // *(&i) = 3
  printf("3 - *p/(*q) + 7: %d", 3 - *p / (*q) + 7); //  3 - (3/5 = 0 em int) + 7 = 10
}