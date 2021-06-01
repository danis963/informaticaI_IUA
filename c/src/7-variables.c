#include<stdio.h>

/*variable global*/
int resultado=0; 
void suma (int , int);
int main (void)
{
	/*variables locales a main*/
	int n1=0;
	int n2=0;


	printf("Ingrese el número 1\n");
	scanf("%d",&n1);
	printf("Ingrese el número 2\n");
	scanf("%d",&n2);
	/*LLAMADA A LA FUNCION*/

	suma(n1,n2); //TRANSFERENCIA DE DATOS POR VALOR
	printf("El resultado es %d \n",resultado);

}

void suma (int n1, int n2)
{
	resultado=(n1+n2);
}
