#include<stdio.h>

/*PROTOTIPO*/
void 	sumar(int*,int*); 
void 	restar(int*,int*);
int 	buscaMayor(int*,int*); 
int 	buscaMenor(int*,int*);
int 	menu(void);
void 	saludo(void);


int main (void)
{
	int n1=0;
	int n2=0;
	int mayor=0;
	int menor=0;
	int opcion=0;

	saludo();
	printf("Ingrese el número 1\n");
	scanf("%d",&n1);
	printf("Ingrese el número 2\n");
	scanf("%d",&n2);

	opcion=menu();
	switch(opcion)
	{
		case 1:
			sumar(&n1,&n2);
			break;

		case 2:
			restar(&n1,&n2);
			break;
		case 3:
			mayor=buscaMayor(&n1,&n2);
			printf("El mayor de %d y %d es %d",n1,n2,mayor); 
			break;
		case 4:
			menor=buscaMenor(&n1,&n2);
			printf("El menor de %d y %d es %d",n1,n2,menor); 
			break;
	}

}

/*FUNCIÓN QUE IMPRIME UN SALUDO DE BIENVENIDA*/
void saludo(void)
{
	printf("Desarrollado por Daniel Rosso\n");
	printf("Contacto: drosso@iua.edu.ar\n");	
}

/*FUNCIÓN QUE RECIBE
DOS NUMEROS ENTEROS E IMPRIME LA SUMA*/
void sumar (int *n1, int *n2)
{
	int resultado=0;
	resultado=(*n1+*n2);
	printf("El resultado de %d + %d es %d",*n1,*n2,resultado);
}

/*FUNCIÓN QUE RECIBE
DOS NUMEROS ENTEROS E IMPRIME LA RESTA*/
void restar (int *n1, int *n2)
{
	int resultado=0;
	resultado=(*n1-*n2);
	printf("El resultado de %d - %d es %d",*n1,*n2,resultado);
}



/*FUNCIÓN QUE RECIBE
DOS NUMEROS ENTEROS Y DEVUELVE LA RESTA*/
int menu (void)
{
	int opcion=0;
	do{
		printf("1-Sumar los numeros\n");
		printf("2-Restar los numeros\n");
		printf("3-Imprimir mayor\n");
		printf("4-Imprimir menor\n");
		scanf("%d",&opcion);
	}while((opcion<0) || (opcion>4));
	return(opcion);
}


/*FUNCIÓN QUE RECIBE
DOS NUMEROS ENTEROS Y DEVUELVE EL MAYOR*/
int buscaMayor (int *n1, int *n2)
{
	if(n1>n2)
	{
		return(*n1);
	}
	else
	{
		return(*n2);
	}
}

/*FUNCIÓN QUE RECIBE
DOS NUMEROS ENTEROS Y DEVUELVE EL MENOR*/
int buscaMenor (int *n1, int *n2)
{
	if(n1<n2)
	{
		return(*n1);
	}
	else
	{
		return(*n2);
	}
}
