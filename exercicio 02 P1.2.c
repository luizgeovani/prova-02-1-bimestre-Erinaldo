/*
2. Um número perfeito é aquele que é igual à soma de seus divisores próprios
(excluindo ele mesmo). Escreva um programa que solicite ao usuário um número
inteiro positivo e verifique se esse número é perfeito. O programa deve utilizar um
laço para somar os divisores e, no final, informar se o número é perfeito ou não. (0.1
ponto)
Entradas: número inteiro positivo.
Saída: informar se o número é perfeito ou não.*/
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
			printf("%d é perfeito",z);}
		else {
		 printf("%d não é perfeito",z);
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
			printf("%d é perfeito",z);}
		else {
		 printf("%d não é perfeito",z);
		 }
	 
}
*/
