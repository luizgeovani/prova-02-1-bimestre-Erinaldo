/*7. Crie um programa que pe�a ao usu�rio para inserir as notas de 5 alunos. Para
cada aluno, o programa deve calcular a m�dia. Se a m�dia for maior ou igual a 7.0,
o aluno � aprovado; caso contr�rio, ele � reprovado. Ao final, o programa deve exibir
a m�dia de cada aluno e se ele foi aprovado ou reprovado. (0.3 ponto)
Entrada: 5 notas (uma por aluno).
Sa�da: m�dia de cada aluno e status de aprova��o.*/

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
		printf("aluno %d est� aprovado com a nota de: %.1f\n",a1,n1);
	} else {printf("o aluno %d est� reprovado com a nota de %.1f\n",a1,n1);
	}
}
