#include<stdio.h>
#define TAM 10
/*PROTOTIPO*/
void cargar_vector(int vector[TAM]); 
void imprimir_vector(int vector[TAM]); 



int main (void)
{
	int array_1d[TAM]={0};
	cargar_vector(array_1d);
	imprimir_vector(array_1d);
}






void cargar_vector (int vector[TAM])
{
	int ii;
	int dato;
	for (ii=0;ii<TAM;ii++)
	{
		printf("Ingrese el elemento %d\n",ii);
		scanf("%d",&dato);
		vector[ii]=dato;
	}
}






void imprimir_vector (int vector[TAM])
{
	int ii;
	for (ii=0;ii<TAM;ii++)
	{
		printf(" %d",vector[ii]);
	}
}
