#include<stdio.h>
#define FIL 3
#define COL 4

/*PROTOTIPO*/
void cargar(int [][COL]); 
void imprimir(int [][COL]); 
void imprimeCol (int [][COL],int *);
void imprimeFil (int [][COL],int);
int  menu (void);

int main (void)
{
	int array_2d[FIL][COL]={0};
	int opcion=0;
	int fila=0;
	int columna=0;
	do
	{
		opcion=menu();
		switch(opcion)
		{
			case 1:
					cargar(array_2d);
					break;
			case 2:
					imprimir(array_2d);
					break;
			case 3:
					printf("Ingrese la columna deseada\n");
					scanf("%d",&columna);
					imprimeCol(array_2d,&columna);
					break;
			case 4:
					printf("Ingrese la fila deseada\n");
					scanf("%d",&fila);
					imprimeFil(array_2d,fila);
					break;


		}
	}while(opcion!=5);
}


int menu (void)
{
	int opcion=0;
	do{
	printf("\nMenu de opciones\n");
	printf("================\n");
	printf("1-Cargar matriz\n");
	printf("2-Imprimir matriz\n");
	printf("3-Imprimir columnas de una fila\n");
	printf("4-Imprimir filas de una columna\n");
	printf("5-Salir\n");

	scanf("%d",&opcion);
	}while((opcion>6) ||(opcion<1));

	return(opcion); 

}


void cargar (int matriz[][COL])
{
	int ii;
	int jj;
	int dato;
	for (ii=0;ii<FIL;ii++)
	{
		for(jj=0;jj<COL;jj++)
		{
		printf("Ingrese el elemento [%d][%d]\n",ii,jj);
		scanf("%d",&dato);
		matriz[ii][jj]=dato;
		}
	}
}

void imprimir (int matriz[][COL])
{
	int ii;
	int jj;

    for(ii=0;ii<FIL;ii++)
    {
       	for(jj=0;jj<COL;jj++)
        {
            printf("%d\t",matriz[ii][jj]);
        }
        printf("\n");
    }
}



void imprimeCol (int matriz[][COL],int *columna)
{
	int ii;
	int jj;

    for(ii=0;ii<FIL;ii++)
    {
       	for(jj=0;jj<COL;jj++)
        {
        	if(jj==*columna)
        	{
            printf("%d\n",matriz[ii][jj]);
            }
        }
    }
}


void imprimeFil (int matriz[][COL],int fila)
{
	int ii;
	int jj;

   	for(jj=0;jj<COL;jj++)
    {
        printf("%d\n",matriz[fila][jj]);
    }
}