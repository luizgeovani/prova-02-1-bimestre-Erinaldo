/******************************************************************************
16. Escreva um programa que apresente um menu com as seguintes opções:
1. Calcular o fatorial de um número.
2. Sair.
O programa deve solicitar ao usuário um número inteiro e calcular o seu fatorial. O
menu deve continuar sendo exibido até que o usuário escolha a opção de sair. (0.2
ponto)
Entrada: escolha da opção e um número inteiro.
Saída: fatorial do número.
*******************************************************************************/
#include <stdio.h>

void fatorial(int n) {
    int fat = 1;
    for (int i = n; i >= 1; i--) {
        fat *= i;
    }
    printf("Fatorial de %d = %d\n", n, fat);
}

int main() {
    int opc, num;

    do {
        printf("Menu:\n1. Calcular fatorial\n2. Sair\nEscolha: ");
        scanf("%d", &opc);

        if (opc == 1) {
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
            fatorial(num);
        }
    } while (opc != 2);

    return 0;
}
