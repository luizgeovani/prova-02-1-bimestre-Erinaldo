/*4. Escreva um programa que solicite ao usu�rio um n�mero decimal e um valor de
base de convers�o (entre 2 e 16). O programa deve converter o n�mero decimal
para a base desejada e exibir o resultado. Utilize um la�o para realizar a convers�o.
(0.1 ponto)
Entradas: n�mero decimal, base de convers�o.
Sa�da: n�mero convertido para a base escolhida.*/

#include <stdio.h>

void converter(int numero, int base) {
    char resultado[64]; // Array para armazenar o resultado
    int i = 0;

    // La�o para converter o n�mero decimal para a base desejada
    do {
        int resto = numero % base;
        if (resto < 10) {
            resultado[i] = '0' + resto; // Para n�meros de 0 a 9
        } else {
            resultado[i] = 'A' + (resto - 10); // Para n�meros de 10 a 15
        }
        numero /= base; // Atualiza o n�mero
        i++;
    } while (numero > 0);

    // Exibir o resultado em ordem inversa
    printf("N�mero convertido: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", resultado[j]);
    }
    printf("\n");
}

int main() {
    int numero, base;

    // Solicita ao usu�rio o n�mero decimal e a base de convers�o
    printf("Digite um n�mero decimal: ");
    scanf("%d", &numero);
    printf("Digite a base de convers�o (entre 2 e 16): ");
    scanf("%d", &base);

    // Verifica se a base est� entre 2 e 16
    if (base < 2 || base > 16) {
        printf("Base inv�lida. Deve estar entre 2 e 16.\n");
        return 1;
    }

    // Chama a fun��o para realizar a convers�o
    converter(numero, base);

    return 0;
}

