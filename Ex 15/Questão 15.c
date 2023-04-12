#include <stdio.h>

int main() {
    char turma;
    int alunos, matricula, ausentes, i;
    float pausencia;
    int turmasmaior5 = 0;

    for (i = 1; i <= 14; i++) {
        printf("Digite a identificacao da turma (A, B, C...): ");
        scanf(" %c", &turma);

        printf("Digite o numero de alunos matriculados na turma %c: ", turma);
        scanf("%d", &alunos);

        ausentes = 0;
        int j;
        for (j = 1; j <= alunos; j++) {
            printf("Digite a matrícula do aluno %d: ", j);
            scanf("%d", &matricula);

            char presenca;
            printf("O aluno %d esta presente (P) ou ausente (A)? ", j);
            scanf(" %c", &presenca);

            if (presenca == 'A') {
                ausentes++;
            }
        }

        pausencia = (float) ausentes / alunos * 100;
        printf("Turma %c - Percentual de ausencia: %.2f%%\n", turma, pausencia);

        if (pausencia > 5) {
            turmasmaior5++;
        }
    }

    printf("Numero de turmas com percentual de ausencia superior a 5%%: %d\n", turmasmaior5);

    return 0;
}
