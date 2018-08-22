#include <stdio.h>

int main(void)
{
  int mat[4], *p, x;
  p = mat + 1;  // válido: deslocando o endereço começando da posição inicial de mat em 1
  p = mat++;    // inválido: operador não é válido para ponteiros
  p = ++mat;    // inválido: operador não é válido para ponteiros
  x = (*mat)++; // válido: valor da posição inicial somado + 1
}