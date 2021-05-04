#include <stdio.h>
int main()
{
    int numero=0;
    int suma=0;
    do
    {
        suma=suma+numero;
        printf("Ingrese un número, para salir ingrese cualquier número negativo\n");
        scanf("%d",&numero);
    }
    while(numero>0);
    printf("La suma de los números ingresados es %d\n",suma);
   return (0);
}
