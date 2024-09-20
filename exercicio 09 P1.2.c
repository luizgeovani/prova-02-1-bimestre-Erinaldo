/*9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
vai para a recuperação, e se for menor que 5.0, o aluno é reprovado. (0.4 ponto)
Entrada: 10 notas (2 para cada aluno).
Saída: média de cada aluno e status (aprovado, recuperação ou reprovado).*/

#include <stdio.h>
#include <locale.h>
void a_r(float x1,int x2){
	//for (int a=1;a<=x2){
		if (x1<5){
			printf("o aluno %d está reprovado com a nota %.1f\n",x2,x1);
		} else if ((x1>=5) && (x1<7)){
		 printf("o aluno %d está de recuperação com a nota %.f\n",x2,x1);}
		 else if (x1>=7){
		 	printf("o aluno %d está aprovado com a nota %.f\n",x2,x1);
		 }
	}

int main(){
	setlocale (LC_ALL,"portuguese");
	float media[5],n1,n2;
	int i,ii;
	
	printf("insira duas notas para cada aluno \n");
	for (ii=1;ii<=5;ii++){
//	for (i=1;i<=2;i++){ teste
		printf("aluno %d, primeira nota\n",ii);
		scanf("%f",&n1);
		printf("aluno %d, segunda nota\n",ii);
		scanf("%f",&n2);
	media[ii]=(n1+n2)/2;
	}
	for (ii=1;ii<=5;ii++){
	a_r(media[ii],ii);
	
	}
	}

	

