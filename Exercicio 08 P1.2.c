/*8. Escreva um programa que sorteie um n�mero entre 1 e 100 e permita ao usu�rio
tentar adivinhar o n�mero. O programa deve dar dicas se o n�mero sorteado �
maior ou menor que o palpite do usu�rio. O usu�rio tem no m�ximo 7 tentativas
para acertar. No final, informe se o usu�rio acertou ou n�o. (0.3 ponto)
Entrada: palpites do usu�rio.
Sa�da: dicas (maior/menor) e resultado final (acertou ou esgotou tentativas).
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite;
    int tentativas = 7;

    // Inicializa o gerador de n�meros aleat�rios
    srand(time(NULL));
    numeroSorteado = rand() % 100 + 1; // Sorteia um n�mero entre 1 e 100

    printf("Tente adivinhar o n�mero entre 1 e 100! Voc� tem %d tentativas.\n", tentativas);

    for (int i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Por favor, digite um n�mero entre 1 e 100.\n");
            i--; // N�o conta a tentativa se o n�mero estiver fora do intervalo
            continue;
        }

        if (palpite == numeroSorteado) {
            printf("Parab�ns! Voc� acertou o n�mero %d!\n", numeroSorteado);
            return 0;
        } else if (palpite < numeroSorteado) {
            printf("O n�mero sorteado � maior que %d. Tente novamente.\n", palpite);
        } else {
            printf("O n�mero sorteado � menor que %d. Tente novamente.\n", palpite);
        }
    }

    printf("Voc� esgotou suas tentativas. O n�mero sorteado era %d.\n", numeroSorteado);
    return 0;
}

