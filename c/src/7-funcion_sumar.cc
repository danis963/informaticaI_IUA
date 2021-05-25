#include<stdio.h>

/*PROTOTIPO*/
int suma(int,int); 

int main (void)
{
	int n1=0;
	int n2=0;
	int resultado=0;

	print("Ingrese el número 1\n");
	scanf("%d",&n1);
	print("Ingrese el número 2\n");
	scanf("%d",&n2);
	/*LLAMADA A LA FUNCION*/

	resultado=suma(n1,n2); //TRANSFERENCIA DE DATOS POR VALOR
}

int suma (int n1, int n2)
{
	int resultado=0;
	resultado=(n1+n2);
	return(resultado);
}
