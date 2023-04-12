#include <stdio.h>

int main() {
  char estado[3];
  
  printf("Digite a sigla do estado: ");
  scanf("%s", estado);
  
  if (estado[0] == 'A' && estado[1] == 'M' || estado[0] == 'a' && estado[1] == 'm') {
    printf("Amazonense");
  } else if (estado[0] == 'R' && estado[1] == 'J' || estado[0] == 'r' && estado[1] == 'j') {
    printf("Carioca");
  } else if (estado[0] == 'P' && estado[1] == 'A' || estado[0] == 'p' && estado[1] == 'a') {
    printf("Paraense");
  } else if (estado[0] == 'A' && estado[1] == 'C' || estado[0] == 'a' && estado[1] == 'c') {
    printf("Acreano");
  }
  
  return 0;
}
