#include<stdio.h>
#include <math.h>
/*PROTOTIPO*/
void 	calculoHipotenusa(int,int); 


int main (void)
{
	int c1=0;
	int c2=0;
	printf("Ingrese el cateto 1\n");
	scanf("%d",&c1);
	printf("Ingrese el cateto 2\n");
	scanf("%d",&c2);
	calculoHipotenusa(c1,c2);

}

/*FUNCIÓN QUE RECIBE
DOS CATETOS DE UN TRIÁNGULO
E IMPRIME LA HIPOTENUSA */
void calculoHipotenusa (int c1, int c2)
{
	float hipotenusa=0;
	hipotenusa = sqrt(pow(c1, 2) + pow(c2, 2));
	printf("La hipotenusa vale %f\n",hipotenusa);
}

