#include<stdio.h>

/*PROTOTIPO*/
int suma_tres(int); 

int main (void)
{
	int n1=0;
	printf("Ingrese un numero \n");
	scanf("%d",&n1);
	int rdo;
	
	printf("N1 antes de llamar a suma_tres %d \n",n1);
	rdo=suma_tres(n1);
	printf("N1 despues de llamar a suma_tres %d \n",n1);
	printf("Valor de resultado %d \n",rdo);

}

int suma_tres (int num)
{
	num=(num+3);
	return(num);
}
