/*1. Escreva um programa em C que solicite ao usuário o valor inicial de um
investimento, a taxa de juros anual (em porcentagem) e o número de anos que o
dinheiro será investido. 5-10-15-20
O programa deve calcular o valor final do investimento ao
final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
acumulado ano a ano. (0.1 ponto)*/
#include <stdio.h>
#include <locale.h>

int main(){

float rs_investido,percent,inves_juros,x1;
int ano,n1;

	printf("informe o valor inicial para o investimento ");
	scanf("%f",&rs_investido);
	printf("informe a taxa de juros anual ");
	scanf("%f",&percent);
	printf("informe numero de anos da aplicação ");
	scanf("%d",&ano);


printf("+----------------------------------------------------+\n");
printf("|investimento | porcentagem|tempo em anos |Inves+Juros|\n");
printf("+----------------------------------------------------+\n");
for (int i=1; i<=ano; i++){
	inves_juros=rs_investido+(rs_investido*(percent/100));
		   printf("  %.2f        | %.2f        |%d             |%.2f          \n",rs_investido,percent,i,inves_juros);
           printf("+----------------------------------------------------+\n");
		rs_investido=inves_juros;
	}



}


