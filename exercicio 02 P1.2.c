/*
2. Um n�mero perfeito � aquele que � igual � soma de seus divisores pr�prios
(excluindo ele mesmo). Escreva um programa que solicite ao usu�rio um n�mero
inteiro positivo e verifique se esse n�mero � perfeito. O programa deve utilizar um
la�o para somar os divisores e, no final, informar se o n�mero � perfeito ou n�o. (0.1
ponto)
Entradas: n�mero inteiro positivo.
Sa�da: informar se o n�mero � perfeito ou n�o.*/
#include <stdio.h>
#include <locale.h>
void perfeito(int z);

int main (){
	setlocale (LC_ALL,"portuguese");
	int x;
	do
	{printf("digite um valor positivo maior que zero \n");
	scanf("%d",&x);
	}while (x <=0);
	
perfeito(x);
}
void perfeito(int z){
	int n1,n2;
	n2=0;

	
	for (n1=1;n1<z;n1++)
		{
		if (z%n1==0)
			{
			n2=n2+n1;
			}
		}
		if (n2==z){
			printf("%d � perfeito",z);}
		else {
		 printf("%d n�o � perfeito",z);
			 }
}

/*
void perfeito(int z){
	int n2=0;
	for (int n1=1;n1<z;n1++)
		{
		if (z%n1==0)
			{
			n2=n2+n1;
			}
		}
		if (n2==z){
			printf("%d � perfeito",z);}
		else {
		 printf("%d n�o � perfeito",z);
		 }
	 
}
*/
