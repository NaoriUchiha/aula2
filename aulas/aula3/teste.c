#include <stdio.h> // biblioteca entrada e saida

int main() { // função principal
  printf("Hello World!\n"); 

  // imprime um número inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 10, 20);
  printf("%5i\n", 110);
  printf("%05i\n", 1);

  //imprime um número decimal
 printf("%f\n", 3.14);
 printf("%.2f\n", 3.14);

  //imprime um caractere aspas simples
  printf("%c\n", 'A');
  printf("%c\n", 65);

  //imprime um string 
  printf("%s\n", "Bom dia!");
  printf("%30s\n", "Quero café!");
  printf("%-30s\n", "Quero café!");

  return 0;
}