#include<stdio.h>
/*PROTOTIPO*/
void cargar_vector(int [], int);
void imprimir_vector(int [],int);











int main (void)
{
	int array_1[10]={0};
	int array_2[3]={0};
	printf("Carga del primer arreglo\n");
	cargar_vector(array_1,10);
	printf("Carga del segundo arreglo\n");
	cargar_vector(array_2,3);
	printf("Impresion del primer arreglo\n");
	imprimir_vector(array_1,10);
	printf("Impresion del segundo arreglo\n");
	imprimir_vector(array_2,3);
	printf("Reutilizamos las funciones!!!\n");
	return(0);

}




void cargar_vector (int vector[], int tam)
{
	int ii;
	int dato;
	for (ii=0;ii<tam;ii++)
	{
		printf("Ingrese el elemento %d\n",ii);
		scanf("%d",&dato);
		vector[ii]=dato;
	}
}








void imprimir_vector (int vector[], int tam)
{
	int ii;
	for (ii=0;ii<tam;ii++)
	{
		printf(" %d",vector[ii]);
	}
	printf("\n");
}
