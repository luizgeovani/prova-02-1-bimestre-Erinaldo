/*5. Escreva um programa que pe�a ao usu�rio para inserir 10 n�meros inteiros. O
programa deve contar quantos n�meros s�o pares e quantos s�o �mpares, e exibir
esses valores no final. (0.3 ponto)*/
#include <stdio.h>
#include <locale.h>


int main(){
	int n,n1,par,impar;
	par=0;
	impar=0;
	printf("digite um numero inteiro seguido de ""enter"" 10 vezes\n");
	for (n=1;n<=10;n++){
		do{
		printf("informe o numero %d \n",n);
		scanf("%d",&n1);
		if (n1<=0){
			printf("numero invalido, tente novamente\n");
		}
	}while (n1<=0);
	if (n1%2==0){
		par++;		
	}else {impar++;
	}
	}
	printf("numeros pares %d, numeros impares %d",par,impar);
}
