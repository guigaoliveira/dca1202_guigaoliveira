#include <stdio.h>

int main() {
  float aloha[10], coisas[10][5], *pf, value = 2.2;

  aloha[2] = value; // válido, value é um valor
  scanf("%f", &aloha); // válido, scanf recebe uma string e um endereço
  aloha = "value"; // inválido: não é possível atribuir uma string a um vetor de float dessa forma
  printf("%f", aloha); // válido, aloha é um endereço para o tipo float
  coisas[4][4] = aloha[3]; // válido: aloha[3] é um valor
  coisas[5] = aloha; // aloha é um endereço, não um valor
  pf = value; // pf recebe um endereço, não um valor 
  pf = aloha; // válido, aloha é um endereço
  
}