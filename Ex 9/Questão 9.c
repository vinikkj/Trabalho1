#include <stdio.h>

int main() {
    float idade, peso, dosagem;
    int gotas;

    printf("Informe a idade do paciente: ");
    scanf("%f", &idade);

    printf("Informe o peso do paciente: ");
    scanf("%f", &peso);

    
    if (idade >= 12) {
        if (peso >= 60) {
            dosagem = 1000.0; 
        } else {
            dosagem = 875.0; 
        }
    } else {
        if (peso >= 5 && peso <= 9) {
            dosagem = 125.0; 
        } else if (peso >= 9.1 && peso <= 16) {
            dosagem = 250.0;
        } else if (peso >= 16.1 && peso <= 24) {
            dosagem = 375.0; 
        } else if (peso >= 24.1 && peso <= 30) {
            dosagem = 500.0; 
        } else {
            dosagem = 750.0; 
        }
    }

    
    gotas = (int) ((dosagem * 20) / 500); 

   
    printf("Receita: Tomar %.1fmg, %d gotas por dose.\n", dosagem, gotas);

    return 0;
}
