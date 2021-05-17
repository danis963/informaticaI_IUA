#include<stdio.h>

/*PROTOTIPO*/
int 	suma(int,int); 
int 	restar(int,int);
int 	menu(void);
void 	saludo(void);


int main (void)
{
	int n1=0;
	int n2=0;
	int resultado=0;
	int opcion=0;

	saludo();
	printf("Ingrese el número 1\n");
	scanf("%d",&n1);
	printf("Ingrese el número 2\n");
	scanf("%d",&n2);

	opcion=menu();
	if(opcion==1)
	{
		resultado=suma(n1,n2); //TRANSFERENCIA DE DATOS POR VALOR
	}
	else
	{
		resultado=resta(n1,n2); //TRANSFERENCIA DE DATOS POR VALOR
	}
	printf("El resultado es %d \n",resultado);

}

/*FUNCIÓN QUE IMPRIME UN SALUDO DE BIENVENIDA*/
void saludo(void)
{
	printf("Bienvenido al programa\n\n");	
}

/*FUNCIÓN QUE RECIBE
DOS NUMEROS ENTEROS Y DEVUELVE LA SUMA*/
int suma (int n1, int n2)
{
	int resultado=0;
	resultado=(n1+n2);
	return(resultado);
}

/*FUNCIÓN QUE RECIBE
DOS NUMEROS ENTEROS Y DEVUELVE LA RESTA*/
int resta (int n1, int n2)
{
	int resultado=0;
	resultado=(n1-n2);
	return(resultado);
}

/*FUNCIÓN QUE RECIBE
DOS NUMEROS ENTEROS Y DEVUELVE LA RESTA*/
int menu (void)
{
	int opcion=0;
	do{
		printf("1-Sumar los numeros\n");
		printf("2-Restar los numeros\n");
		scanf("%d",&opcion);
	}while((opcion!=1) || (opcion!=0)) 
}


