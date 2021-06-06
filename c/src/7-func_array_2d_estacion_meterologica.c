#include<stdio.h>
#include <stdlib.h>
#define DIAS 3
#define MUESTRAS 4

/*PROTOTIPO*/
void cargarTemp(int [][MUESTRAS]);
void cargarHum(int [][MUESTRAS]);
void imprimeDia(int [][MUESTRAS],int);
void imprimeMayorTempDia(int [][MUESTRAS], int *);
void imprimeMenorTempDia(int [][MUESTRAS], int *);
void imprimeMayorTemp(int [][MUESTRAS]);
void promedioDia(int [][MUESTRAS]);
int menu(void);

int main (void)
{
	int temp[DIAS][MUESTRAS]={0};
	int hum[DIAS][MUESTRAS]={0};
	int dia;
	int opcion=0;
	do
	{
		opcion=menu();
		switch(opcion)
		{
			case 1:
					cargarTemp(temp);
					cargarHum(hum);
					printf("Datos cargados satisfactoriamente\n");
					break;
			case 2:
					printf("Ingrese el numero dia deseado [0-%d]\n",DIAS - 1 );
					scanf("%d",&dia);
					printf("Valores de temperatura para el día: %d\n",dia);
					imprimeDia(temp,dia);
					printf("Valores de humedad para el día: %d\n",dia);
					imprimeDia(hum,dia);
					break;

			case 3:
					printf("Ingrese el numero dia deseado [0-%d]\n",DIAS - 1 );
					scanf("%d",&dia);
					imprimeMayorTempDia(temp,&dia);
					break;
			case 4:
					printf("Ingrese el numero dia deseado [0-%d]\n",DIAS - 1 );
					scanf("%d",&dia);
					imprimeMenorTempDia(temp,&dia);
					break;
			case 5:
					imprimeMayorTemp(temp);
					break;
			case 6:
					printf("\n\nPromedio de temperaturas\n\n");
					promedioDia(temp);
					printf("\n\nPromedio de humedades\n\n");
					promedioDia(hum);
					break;




		}
	}while(opcion!=7);
}


int menu (void)
{
	int opcion=0;
	do{
	printf("\nMenu de opciones\n");
	printf("================\n");
	printf("1-Cargar datos\n");
	printf("2-Imprimir las muestras de un dia\n");
	printf("3-Imprimir la mayor temperatura de un dia\n");
	printf("4-Imprimir la menor temperatura de un dia\n");
	printf("5-Imprimir la dia y hora de la mayor temperatura del mes\n");
	printf("6-Imprimir promedios de muestra de un dia\n");
	printf("7-Salir\n");

	scanf("%d",&opcion);
	}while((opcion>7) ||(opcion<1));

	return(opcion); 

}


void cargarTemp (int temp[][MUESTRAS])
{
	int ii;
	int jj;
	time_t t;
    srand((unsigned) time_t(&t)); 
 
	for (ii=0;ii<DIAS;ii++)
	{
		for(jj=0;jj<MUESTRAS;jj++)
		{
		temp[ii][jj]=rand() % 60 - 10;
		}
	}
}


void cargarHum(int hum[][MUESTRAS])
{
	int ii;
	int jj;
	time_t t;
    srand((unsigned) time_t(&t)); 
 
	for (ii=0;ii<DIAS;ii++)
	{
		for(jj=0;jj<MUESTRAS;jj++)
		{
		hum[ii][jj]=rand() % 100;
		}
	}
}



void imprimeDia(int muestras[][MUESTRAS],int dia)
{
	int ii;
	int jj;
	for(jj=0;jj<MUESTRAS;jj++)
	{
		printf("Muestra: %d - Valor: %d\n",jj,muestras[dia][jj]);
	}
}

void imprimeMayorTempDia(int muestras[][MUESTRAS],int *dia)
{
	int ii;
	int jj;
	int mayor;
	mayor=muestras[*dia][0];

	for(jj=0;jj<MUESTRAS;jj++)
	{
		if(muestras[*dia][jj]>mayor)
		{
			mayor=muestras[*dia][jj];
		}
	}

	printf("La mayor temperatura del dia %d fue de %d\n",*dia,mayor);
}



void imprimeMenorTempDia(int muestras[][MUESTRAS],int *dia)
{
	int ii;
	int jj;
	int menor;
	menor=muestras[*dia][0];

	for(jj=0;jj<MUESTRAS;jj++)
	{
		if(muestras[*dia][jj]<menor)
		{
			menor=muestras[*dia][jj];
		}
	}

	printf("La menor temperatura del dia %d fue de %d\n",*dia,menor);
}


void imprimeMayorTemp(int muestras[][MUESTRAS])
{
	int ii;
	int jj;
	int mayor;
	int dia_mayor;
	int hora_mayor;
	hora_mayor=dia_mayor=0;
	mayor=muestras[0][0];

	for (ii=0;ii<DIAS;ii++)
	{
		for(jj=0;jj<MUESTRAS;jj++)
		{
			if(muestras[ii][jj]>mayor)
			{
				hora_mayor=jj;
				dia_mayor=ii;
				mayor=muestras[ii][jj];
			}
		}
	}

	printf("La mayor temperatura del mes fue el dia %d a las %d y su valor fue de %d\n",dia_mayor,hora_mayor,mayor);
}




void promedioDia(int muestras[][MUESTRAS])
{
	int ii;
	int jj;
	float acum=0;

	for (ii=0;ii<DIAS;ii++)
	{
		for(jj=0;jj<MUESTRAS;jj++)
		{
			acum+=muestras[ii][jj];
		}
			acum=acum/24.0;
			printf("Promedio del dia %d %f \n",ii,acum);
	}

}



