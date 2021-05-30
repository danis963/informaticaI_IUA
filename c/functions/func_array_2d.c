#include<stdio.h>
#define FIL 2
#define COL 3

/*PROTOTIPOS*/
void cargar_matriz(int [][COL]); 
void imprimir_matriz(int [][COL]); 








int main (void)
{
	int array_2d[FIL][COL];
	/*LLAMADA A FUNCIONES*/
	cargar_matriz(array_2d); 
	imprimir_matriz(array_2d);
	return(0);
}






void cargar_matriz (int matriz[][COL])
{
	int ii;
	int jj;
	int dato;
	for (ii=0;ii<FIL;ii++)
	{
		for(jj=0;jj<COL;jj++)
		{
		printf("Ingrese el elemento %d %d\n",ii,jj);
		scanf("%d",&dato);
		matriz[ii][jj]=dato;
		}
		
	}
}


void imprimir_matriz (int matriz[][COL])
{
	int ii;
	int jj;
	int dato;
	for (ii=0;ii<FIL;ii++)
	{
		for(jj=0;jj<COL;jj++)
		{
		printf("%d \t",matriz[ii][jj]);
		}
		printf("\n");
	}
}
