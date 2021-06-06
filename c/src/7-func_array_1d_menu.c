#include<stdio.h>
#define TAM 10
/*PROTOTIPO*/
void saludo(void); 
void cargar(int []); 
void imprimir(int []); 
void imprimeMayor (int []);
void imprimeMenor (int []);
float calculaMedia (int []);
void imprimeMayoresMedia (int [], float);
void imprimeMenoresMedia (int []);
int  menu (void);

int main (void)
{
	int array_1d[TAM]={0};
	int opcion;
	float media=0;
	saludo();
	
	do
	{
		opcion=menu();
		switch(opcion)
		{
			case 1:
					cargar(array_1d);
					media=calculaMedia(array_1d);
					break;
			case 2:
					imprimir(array_1d);
					break;
			case 3:
					imprimeMayor(array_1d);
					break;
			case 4:
					imprimeMenor(array_1d);
					break;
			case 5:
					media=calculaMedia(array_1d);
					printf("La media vale %f\n",media);
					break;
			case 6:
					imprimeMayoresMedia(array_1d,media);
					break;
			case 7:
					imprimeMenoresMedia(array_1d);
					break;


		}
	}while(opcion!=8);
}


void saludo(void)
{
	printf("Bienvenido al programa\n");
	printf("======================\n");
}
int menu (void)
{
	int opcion=0;
	do{
	printf("\nMenu de opciones\n");
	printf("================\n");
	printf("1-Cargar vector\n");
	printf("2-Imprimir vector\n");
	printf("3-Imprimir mayor\n");
	printf("4-Imprimir menor\n");
	printf("5-Imprimir media\n");
	printf("6-Imprimir elementos mayores a la media\n");
	printf("7-Imprimir elementos menores a la media\n");
	printf("8-Salir\n");

	scanf("%d",&opcion);
	}while((opcion>8) ||(opcion<1));

	return(opcion); 

}


void cargar (int vector[])
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

void imprimir (int vector[])
{
	int ii;
	for (ii=0;ii<TAM;ii++)
	{
		printf(" %d",vector[ii]);
	}
}

void imprimeMayor (int vector[])
{
	int ii;
	int mayor;
	for (ii=0;ii<TAM;ii++)
	{
		if(ii==0)
		{
			mayor=vector[ii];
		}
		else
		{
			if(vector[ii]>mayor)
			{
				mayor=vector[ii];
			}
		}
	}
	printf("El mayor elemento es %d\n",mayor);
}

void imprimeMenor (int vector[])
{
	int ii;
	int menor;
	for (ii=0;ii<TAM;ii++)
	{
		if(ii==0)
		{
			menor=vector[ii];
		}
		else
		{
			if(vector[ii]<menor)
			{
				menor=vector[ii];
			}
		}
	}
	printf("El menor elemento es %d\n",menor);
}


float calculaMedia (int vector[])
{
	int ii;
	float acum=0;
	for (ii=0;ii<TAM;ii++)
	{
		acum+=vector[ii];
	}
	acum=acum/TAM;

	return(acum);
}



void imprimeMayoresMedia (int vector[], float media)
{
	int ii;
	printf("Los elementos mayores a la media son: \n");

	for (ii=0;ii<TAM;ii++)
	{
		if(vector[ii]>media)
		{
			printf(" %d",vector[ii]);
		}
	}
}


void imprimeMenoresMedia (int vector[])
{
	int ii;
	float media=0;
	media=calculaMedia(vector);
	printf("Los elementos menores a la media son: \n");

	for (ii=0;ii<TAM;ii++)
	{
		if(vector[ii]<media)
		{
			printf(" %d",vector[ii]);
		}
	}
}