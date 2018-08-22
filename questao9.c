#include <stdio.h>

int main()
{
  int vet[] = {4, 9, 13};
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("%d ", *(vet + i));
  } // printa os valores do array
  for (i = 0; i < 3; i++)
  {
    printf("%X ", vet + i);
  } // printa os endereços das posições do array em hexadecimal
}