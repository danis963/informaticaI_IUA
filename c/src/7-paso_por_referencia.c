#include<stdio.h>

/*PROTOTIPO*/
int suma_tres(int *); 

int main (void)
{
	int n1=0;
	int resultado;
	printf("Ingrese un numero \n");
	scanf("%d",&n1);

	printf("N1 antes de llamar a suma_tres %d \n",n1);
	resultado=suma_tres(&n1);
	printf("N1 despues de llamar a suma_tres %d \n",n1);
	printf("Valor de resultado %d \n",resultado);

}

int suma_tres (int *n1)
{
	int resultado=0;
	*n1=*n1+3;
	resultado=(*n1+3);
	return(resultado);
}
