/******************************************************************************
14. Escreva um programa que apresente um menu com as seguintes opções:
1. Adição.
2. Subtração.
3. Multiplicação.
4. Divisão.
5. Sair.
O programa deve solicitar dois números e realizar a operação escolhida. Deve
continuar exibindo o menu até que o usuário escolha a opção de sair. (0.2 ponto)
Entrada: escolha da operação e dois números.
Saída: resultado da operação.
*******************************************************************************/
#include <stdio.h>

void add(float a, float b) {
    printf("Resultado: %.2f\n", a + b);
}

void sub(float a, float b) {
    printf("Resultado: %.2f\n", a - b);
}

void mul(float a, float b) {
    printf("Resultado: %.2f\n", a * b);
}

void divi(float a, float b) {
    if (b != 0)
        printf("Resultado: %.2f\n", a / b);
    else
        printf("Divisão por zero não permitida.\n");
}

int main() {
    int opc;
    float n1, n2;

    do {
        printf("Menu:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nEscolha: ");
        scanf("%d", &opc);

        if (opc >= 1 && opc <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);

            if (opc == 1) add(n1, n2);
            else if (opc == 2) sub(n1, n2);
            else if (opc == 3) mul(n1, n2);
            else if (opc == 4) divi(n1, n2);
        }
    } while (opc != 5);

    return 0;
}