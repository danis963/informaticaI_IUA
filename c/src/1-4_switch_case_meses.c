#include <stdio.h>

int main()
{
	int mes=0;

	printf("Ingrese el mes: \n\n");
	scanf("%d",&mes);
	switch(mes)
	{
		case  4:
		case  6:
		case  9:
		case 11:
			printf("El mes ingresado tiene 30 dias\n\n");
			break;
		case  1:
		case  3:
		case  5:
		case  7:
		case  8:
		case 10:
		case 12:
			printf("El mes ingresado tiene 31 dias\n\n");
			break;

		case 2:
			printf("El mes ingresado tiene 28 dias\n\n");
			break;

		default:
			printf("El mes ingresado es invalido\n\n");
			break;
	}


	return 0;

}
