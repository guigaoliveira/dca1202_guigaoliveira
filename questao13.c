/* 
  Um ponteiro para função aponta para outra função, armazenando o endereço para a função, que pode ser chamada como uma função normalmente.
  Referências: https://pt.stackoverflow.com/questions/2983/como-passar-uma-fun%C3%A7%C3%A3o-como-par%C3%A2metro-em-c
*/

// Exemplo: Diferentes formas de composição de função

#include <stdio.h>

typedef int (*Function)(int); // define um tipo de função para simplificar a notação

int g(int n)
{
  return n + 1;
}

int f(int n)
{
  return n * 2;
}
int compose(Function g, Function f, int x)
{
  return g(f(x));
}

int main(void)
{
  int (*plus1)(int);
  int (*mult2)(int);

  plus1 = &g;
  mult2 = &f;

  int value = mult2(plus1(1));
  printf("(1 + 1) * 2 = %d \n", value);

  value = compose(mult2, plus1, 1);
  printf("(1 + 1) * 2 = %d", value);

  return 0;
}