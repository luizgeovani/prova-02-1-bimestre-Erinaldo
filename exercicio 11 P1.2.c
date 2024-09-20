/*******************************************************************************
11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
classifique cada nota em conceitos: A (nota entre 9 e 10), B (nota entre 7 e 8.9), C
(nota entre 5 e 6.9), D (nota entre 3 e 4.9) ou F (nota abaixo de 3). (0.4 ponto)
Entrada: 8 notas.
Saída: conceito correspondente para cada nota.
*******************************************************************************/
#include <stdio.h>

void classNota(float n) {
    if (n >= 9.0) printf("Conceito: A\n");
    else if (n >= 7.0) printf("Conceito: B\n");
    else if (n >= 5.0) printf("Conceito: C\n");
    else if (n >= 3.0) printf("Conceito: D\n");
    else printf("Conceito: F\n");
}

int main() {
    float n;
    for (int i = 1; i <= 8; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &n);
        classNota(n);
    }
    return 0;
}
