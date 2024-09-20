/*******************************************************************************
10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
Para cada idade, o programa deve classificar a pessoa em uma das categorias:
criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
anos ou mais). (0.4 ponto)
Entrada: 10 idades.
Saída: a classificação etária para cada idade
*******************************************************************************/
#include <stdio.h>

void clas(int idade) {
    if (idade <= 12) 
        printf("Crianca\n");
    else if (idade <= 17) 
        printf("Adolescente\n");
    else if (idade <= 64) 
        printf("Adulto\n");
    else 
        printf("Idoso\n");
}

int main() {
    int idade;
    for (int i = 1; i <= 10; i++) {
        printf("Informe a idade da %d° pessoa: ", i);
        scanf("%d", &idade);
        clas(idade);
    }
    return 0;
}
