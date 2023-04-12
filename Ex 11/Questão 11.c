#include <stdio.h>

int main() {
   int a, b, c, i;
   
  
   printf("Digite os dois primeiros termos da serie de Fetuccine: ");
   scanf("%d %d", &a, &b);
   
   printf("Os 10 primeiros termos da serie sao:\n");
   printf("%d - Termo do Usuario\n", a); 
   printf("%d - Termo do Usuario\n", b);
   
   
   for (i = 3; i <= 10; i++) {
      if (i % 2 == 1) { 
         c = a + b;
         printf("%d + %d = %d\n", a, b, c); 
      } else { 
         c = b - a;
         printf("%d - %d = %d\n", b, a, c); 
      }
      a = b; 
      b = c; 
   }
   
   return 0;
}
