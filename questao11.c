#include <stdio.h>

int main()
{
  int address = 4092;
  printf("%d \n", address + sizeof(char) * 1);
  printf("%d \n", address + sizeof(char) * 2);
  printf("%d \n", address + sizeof(char) * 3);

  printf("%d \n", address + sizeof(short int) * 1); // pc é 64 bits
  printf("%d \n", address + sizeof(short int) * 2);
  printf("%d \n", address + sizeof(short int) * 3);

  printf("%d \n", address + sizeof(float) * 1);
  printf("%d \n", address + sizeof(float) * 2);
  printf("%d \n", address + sizeof(float) * 3);

  printf("%d \n", address + sizeof(double) * 3);
  printf("%d \n", address + sizeof(double) * 3);
  printf("%d \n", address + sizeof(double) * 3);
}