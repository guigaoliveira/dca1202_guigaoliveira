#include <stdio.h>

int main(void)
{
  int i = 1, j = 1;
  int *p, *q;

  p = &i;          // válido: enderenço
  p = i;           // inválido: ponteiro não armazena valor
  q = &j;          // válido: enderenço
  p = &*&i;        // válido: enderenço
  i = (*&)j;       // inválido: os operadores estão sendo aplicados em nada.
  i = *&j;         // válido: valor
  i = *&*&j;       // válido: valor
  q = *p;          // inválido: ponteiro não armazena valor
  i = (*p)++ + *q; // válido: valor
}