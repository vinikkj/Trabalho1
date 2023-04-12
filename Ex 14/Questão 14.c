#include <stdio.h>

int main() {
  
  char sexo, olhos, cabelos;
  int idade;
  
 
  int maior = 0;
  int feminino = 0;
  int femininovl = 0;
  
  
  do {
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    
    if (sexo == 'M' || sexo == 'F') {
      printf("Digite a cor dos olhos (A/V/C): ");
      scanf(" %c", &olhos);
      
      if (olhos == 'A' || olhos == 'V' || olhos == 'C') {
        printf("Digite a cor dos cabelos (L/C/P): ");
        scanf(" %c", &cabelos);
        
        if (cabelos == 'L' || cabelos == 'C' || cabelos == 'P') {
          printf("Digite a idade (-1 para encerrar): ");
          scanf("%d", &idade);
          
          if (idade > 0) {
            
            if (idade > maior) {
              maior = idade;
            }
            
            
            if (sexo == 'F') {
              feminino++;
              
              
              if (olhos == 'V' && cabelos == 'L' && idade >= 18 && idade <= 35) {
                femininovl++;
              }
            }
          }
        }
      }
    }
  } while (idade != -1);
  
  
  printf("O habitante mais velho tem %d anos.\n", maior);
  
  if (feminino > 0) {
    float percentual = 100.0 * femininovl / feminino;
    printf("A percentagem de mulheres com olhos verdes, cabelos louros e idade entre 18 e 35 anos é %.2f%%.\n", percentual);
  } else {
    printf("Nenhum habitante do sexo feminino foi registrado.\n");
  }
  
  return 0;
}
