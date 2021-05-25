#include<stdio.h>

/*PROTOTIPO*/
void swap(int *,int *); 

int main (void)
{
	int n1=0;
	int n2=0;

	printf("Ingrese un numero \n");
	scanf("%d",&n1);
	printf("Ingrese un numero \n");
	scanf("%d",&n2);
	printf("N1 antes de llamar a swap %d \n",n1);
	printf("N2 antes de llamar a swap %d \n",n2);
	swap(&n1,&n2);
	
	printf("N1 despues de llamar a swap %d \n",n1);
	printf("N2 despues de llamar a swap %d \n",n2);
	return(0);
}

void swap (int *n1, int *n2)
{
	int auxiliar=0;
	auxiliar=*n1;
	*n1=*n2;
	*n2=auxiliar;
}
