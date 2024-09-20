/******************************************************************************
15. Escreva um programa que apresente um menu com as seguintes opções:
1. Gerar a tabuada de um número.
2. Sair.
O programa deve solicitar ao usuário o número desejado e exibir a tabuada (de 1 a
10). O menu deve continuar sendo exibido até que o usuário escolha a opção de
sair. (0.2 ponto)
Entrada: escolha da opção e um número.
Saída: tabuada do número.
*******************************************************************************/
#include <stdio.h>

void tabuada(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int opc, num;

    do {
        printf("Menu:\n1. Gerar tabuada\n2. Sair\nEscolha: ");
        scanf("%d", &opc);

        if (opc == 1) {
            printf("Digite um numero: ");
            scanf("%d", &num);
            tabuada(num);
        }
    } while (opc != 2);

    return 0;
}
