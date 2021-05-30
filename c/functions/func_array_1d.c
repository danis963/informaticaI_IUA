#define TAM 10
/*PROTOTIPOS*/
void cargar_vector(int []); 
void imprimir_vector(int []); 

int main (void)
{
	int array_1d[TAM]={0};
	/*LLAMADA A FUNCIONES*/
	cargar_vector(array_1d); 
	imprimir_vector(array_1d);
	return(0);
}








void cargar_vector (int vector[])
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







void imprimir_vector (int vector[])
{
	int ii;
	for (ii=0;ii<TAM;ii++)
	{
		printf(" %d",vector[ii]);
	}
}
