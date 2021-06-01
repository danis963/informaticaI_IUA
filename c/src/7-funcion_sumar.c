#include<stdio.h>

/*PROTOTIPO*/
void suma(int,int); 

int main (void)
{
	int n1=0;
	int n2=0;
	int n3=0;
	int n4=0;
	int resultado=0;

	printf("Ingrese el número 1\n");
	scanf("%d",&n1);
	printf("Ingrese el número 2\n");
	scanf("%d",&n2);
	/*LLAMADA A LA FUNCION*/
	suma(n1,n2); //TRANSFERENCIA DE DATOS POR VALOR
	
	printf("Luego de la llamada a suma por primera vez");

	printf("Ingrese el número 1\n");
	scanf("%d",&n3);
	printf("Ingrese el número 2\n");
	scanf("%d",&n4);
	/*LLAMADA A LA FUNCION*/
	suma(n3,n4); //TRANSFERENCIA DE DATOS POR VALOR
}

void suma (int a, int b)
{
	int c=0;
	c=(a+b);
	printf("El resultado es %d \n",c);
}
