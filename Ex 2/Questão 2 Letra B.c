#include <stdio.h>

int main() {
  char nome[100];
  int idade;
  
  printf("Digite o nome do usuario: ");
  scanf("%s", nome);
  
  printf("Digite a idade do usuario: ");
  scanf("%d", &idade);
  
  printf("%s tem %d anos.", nome, idade);
  
  return 0;
}
