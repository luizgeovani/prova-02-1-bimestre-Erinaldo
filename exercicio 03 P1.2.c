/*3. Escreva um programa em C que solicite ao usuário as notas de 5 alunos e suas
respectivas pesos, calcule a média ponderada de cada aluno e ao final exiba a
média final da turma. (0.1 ponto)*/
#include <stdio.h>
#include <locale.h>

float media_t(float x1, float x2);

int main(){
	setlocale (LC_ALL,"portuguese");
float n1,p1,s_n,s_p,ch1,ch2,ch3,ch4,ch5;
int a1,f1,f2,f3,f4,f5;
s_p=0;
s_n=0;	
	printf("para so alunos  digite a nota e pescoço   das 5 avaliações\n");
	for (a1=1;a1<=5;a1++){

	for (int i=1;i<=5;i++){
	printf("digite a nota do aluno %d \n",a1);
	scanf("%f",&n1);
	printf("digite o peso da nota do aluno %d\n",a1);
	scanf("%f",&p1);
	s_n+=n1*p1;
	s_p+=p1;
}
if (a1==1){
	ch1=media_t(s_n,s_p);
			}
else if(a1==2){
	ch2=media_t(s_n,s_p);
	}else if (a1==3){
	ch3=media_t(s_n,s_p);
	}else if (a1==4){
	ch4=media_t(s_n,s_p);
	}else if (a1==5){
	ch5=media_t(s_n,s_p);
}}
printf("as medias aritimeticas dos alunos são:\n aluno 1 é %.2f\n Aluno 2 é %.2f\n Aluno 3 é %.2f\n Aluno 4 é %.2f\n Aluno 5 é %.2f\n",ch1,ch2,ch3,ch4,ch5);
printf("e a média da turma é %.2f",(ch1+ch2+ch3+ch4+ch5)/5);
return 0;
}

float media_t(float x1, float x2){
	if (x2==0) return 0;
	return x1/x2;
}
