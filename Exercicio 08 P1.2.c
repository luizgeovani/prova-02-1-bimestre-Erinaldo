/*8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
para acertar. No final, informe se o usuário acertou ou não. (0.3 ponto)
Entrada: palpites do usuário.
Saída: dicas (maior/menor) e resultado final (acertou ou esgotou tentativas).
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite;
    int tentativas = 7;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    numeroSorteado = rand() % 100 + 1; // Sorteia um número entre 1 e 100

    printf("Tente adivinhar o número entre 1 e 100! Você tem %d tentativas.\n", tentativas);

    for (int i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Por favor, digite um número entre 1 e 100.\n");
            i--; // Não conta a tentativa se o número estiver fora do intervalo
            continue;
        }

        if (palpite == numeroSorteado) {
            printf("Parabéns! Você acertou o número %d!\n", numeroSorteado);
            return 0;
        } else if (palpite < numeroSorteado) {
            printf("O número sorteado é maior que %d. Tente novamente.\n", palpite);
        } else {
            printf("O número sorteado é menor que %d. Tente novamente.\n", palpite);
        }
    }

    printf("Você esgotou suas tentativas. O número sorteado era %d.\n", numeroSorteado);
    return 0;
}

