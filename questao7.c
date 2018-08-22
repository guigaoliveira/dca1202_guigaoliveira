#include <stdio.h>

int main(void)
{
  int pulo[5] = {1, 2, 3, 4, 5};

  printf("%d \n", *(pulo + 2)); // valor de pulo[2] (o valor do terceiro elemento do vetor)
  printf("%d \n", *(pulo + 4)); // valor de pulo[4]
  printf("%d \n", pulo + 4);    // enderenço deslocado em 4
  printf("%d", pulo + 2);       // enderenço deslocado em 2
}