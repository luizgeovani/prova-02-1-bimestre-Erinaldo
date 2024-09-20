/*******************************************************************************
 13. Escreva um programa que apresente um menu com as seguintes opções:
1. Converter de Celsius para Fahrenheit.
2. Converter de Fahrenheit para Celsius.
3. Sair.
O programa deve continuar exibindo o menu até que o usuário escolha a opção de
sair. (0.2 ponto)
Entrada: escolha da opção e o valor da temperatura.
Saída: temperatura convertida.
*******************************************************************************/
#include <stdio.h>

void c_para_f(float c) {
    printf("Fahrenheit: %.2f\n", (c * 9 / 5) + 32);
}

void f_para_c(float f) {
    printf("Celsius: %.2f\n", (f - 32) * 5 / 9);
}

int main() {
    int opc;
    float temp;

    do {
        printf("Menu:\n1. Celsius para Fahrenheit\n2. Fahrenheit para Celsius\n3. Sair\nEscolha: ");
        scanf("%d", &opc);

        if (opc == 1) {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            c_para_f(temp);
        } else if (opc == 2) {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            f_para_c(temp);
        }
    } while (opc != 3);

    return 0;
}