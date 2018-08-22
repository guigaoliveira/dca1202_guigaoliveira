#include <stdio.h>

int main(void)
{
  float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for (i = 0; i <= 4; i++)
  {
    printf("\ni = %d", i);                    // valor da variável i
    printf("vet[%d] = %.1f ", i, vet[i]);     // valor da variável i e valor da posição i do vetor
    printf("*(f + %d) = %.1f ", i, *(f + i)); // valor da variável i e valor que está no endereço i de f
    printf("&vet[%d] = %X ", i, &vet[i]);     // valor da variável i e o endereço referente a posição i do vetor (em hexadecimal)
    printf("(f + %d) = %X", i, f + i);        // valor da variável i e o endereço da posição inicial 0 deslocado em i (em hexadecimal)
  }
  /* 
    i = 0
    vet[0] = 1.1
    *(f + 0) = 1.1
    &vet[0] = ? (hex)
    (f + 0) = ? (hex)
    ...
  */
}