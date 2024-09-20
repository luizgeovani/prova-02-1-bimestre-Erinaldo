/*******************************************************************************
12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não. (0.4 ponto)
Entrada: 6 números inteiros.
Saída: paridade do número e a classificação adicional.
*******************************************************************************/
#include <stdio.h>

void classn(int n) {
    if (n % 2 == 0) {
        printf("%d e par!\n", n);
        if (n > 10)
            printf("Maior que 10.\n");
        else
            printf("Menor ou igual a 10.\n");
    } else {
        printf("%d e impar!\n", n);
        if (n < 50)
            printf("Menor que 50.\n");
        else
            printf("Maior ou igual a 50.\n");
    }
}

int main() {
    int n;
    for (int i = 1; i <= 6; i++) {
        printf("Informe o %d° numero inteiro: ", i);
        scanf("%d", &n);
        classn(n);
    }
    return 0;
}
