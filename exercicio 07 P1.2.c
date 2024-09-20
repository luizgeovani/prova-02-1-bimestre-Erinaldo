/*7. Crie um programa que peça ao usuário para inserir as notas de 5 alunos. Para
cada aluno, o programa deve calcular a média. Se a média for maior ou igual a 7.0,
o aluno é aprovado; caso contrário, ele é reprovado. Ao final, o programa deve exibir
a média de cada aluno e se ele foi aprovado ou reprovado. (0.3 ponto)
Entrada: 5 notas (uma por aluno).
Saída: média de cada aluno e status de aprovação.*/

#include <stdio.h>
#include <locale.h>
void reprova(int a1, float n1);

int main()
{
	int i,t_a;
	float notas[5];//array para armazenar as notas de 1 ate 5
	
	
	for (int i=1;i<=5;i++){
		printf("insira a nota do aluno %d\n",i);
		scanf("%f",&notas[i]);
	}
	for (i=1;i<=5;i++){
		t_a=notas[i];
		reprova(i,notas[i]);
	}

}

void reprova(int a1, float n1){
	if (n1>=7){
		printf("aluno %d está aprovado com a nota de: %.1f\n",a1,n1);
	} else {printf("o aluno %d está reprovado com a nota de %.1f\n",a1,n1);
	}
}
