/*6. Escreva um programa que solicite dois n�meros inteiros positivos ao usu�rio: um
valor inicial e um valor final. O programa deve ent�o exibir todos os n�meros primos
dentro desse intervalo. Se n�o houver n�meros primos no intervalo, o programa
deve informar isso. (0.3 ponto)*/
#include<stdio.h>
#include<locale.h>
int primo_ou_n(int x1)
{
int q,x,sn;
sn=0;
	 for (x=1;x<=x1;x++)
	  	{
		 if (x1%x==0)
			{
			sn+=1;
			}
		}
		if (sn==2){
			return x1;
		} else{return 0;
		}
	}



int main (){
	setlocale (LC_ALL,"portuguese");
	int n1,n2,p1,p2,q;
	printf("informe dois valores inteiros, um valor inicial e outro valor final \n");
	do{
	printf("primeiro valor ");
	scanf("%d",&n1);
	printf("segundo valor ");
	scanf("%d",&n2);
	
	}while (n1>n2 || n1<=0);
	
	for(q=n1;q<n2;q++){
	if (primo_ou_n(q)) 
	{p2+=1;
	printf(" %d � primo\n",q);}
		
	}if (!p2){printf("n�o tem numeros primos neste intervalo");
	}
	}


