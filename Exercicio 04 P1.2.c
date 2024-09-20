/*4. Escreva um programa que solicite ao usuário um número decimal e um valor de
base de conversão (entre 2 e 16). O programa deve converter o número decimal
para a base desejada e exibir o resultado. Utilize um laço para realizar a conversão.
(0.1 ponto)
Entradas: número decimal, base de conversão.
Saída: número convertido para a base escolhida.*/

#include <stdio.h>

void converter(int numero, int base) {
    char resultado[64]; // Array para armazenar o resultado
    int i = 0;

    // Laço para converter o número decimal para a base desejada
    do {
        int resto = numero % base;
        if (resto < 10) {
            resultado[i] = '0' + resto; // Para números de 0 a 9
        } else {
            resultado[i] = 'A' + (resto - 10); // Para números de 10 a 15
        }
        numero /= base; // Atualiza o número
        i++;
    } while (numero > 0);

    // Exibir o resultado em ordem inversa
    printf("Número convertido: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", resultado[j]);
    }
    printf("\n");
}

int main() {
    int numero, base;

    // Solicita ao usuário o número decimal e a base de conversão
    printf("Digite um número decimal: ");
    scanf("%d", &numero);
    printf("Digite a base de conversão (entre 2 e 16): ");
    scanf("%d", &base);

    // Verifica se a base está entre 2 e 16
    if (base < 2 || base > 16) {
        printf("Base inválida. Deve estar entre 2 e 16.\n");
        return 1;
    }

    // Chama a função para realizar a conversão
    converter(numero, base);

    return 0;
}

