/*9. Escreva um programa que pe�a ao usu�rio para inserir as notas de 5 alunos.
Para cada aluno, o programa deve calcular a m�dia de duas provas. Se a m�dia for
maior ou igual a 7.0, o aluno � aprovado. Se a m�dia estiver entre 5.0 e 6.9, o aluno
vai para a recupera��o, e se for menor que 5.0, o aluno � reprovado. (0.4 ponto)
Entrada: 10 notas (2 para cada aluno).
Sa�da: m�dia de cada aluno e status (aprovado, recupera��o ou reprovado).*/

#include <stdio.h>
#include <locale.h>
void a_r(float x1,int x2){
	//for (int a=1;a<=x2){
		if (x1<5){
			printf("o aluno %d est� reprovado com a nota %.1f\n",x2,x1);
		} else if ((x1>=5) && (x1<7)){
		 printf("o aluno %d est� de recupera��o com a nota %.f\n",x2,x1);}
		 else if (x1>=7){
		 	printf("o aluno %d est� aprovado com a nota %.f\n",x2,x1);
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

	

