#include <stdio.h>
int main()
{
    int acumulador=0;
    int numero=0;
    while(numero!=-1)
    {
        printf("Ingrese un numero entero\n");
        printf("Para salir ingrese -1\n");
        scanf("%d",&numero);
        acumulador+=numero;
    }
    printf("La suma de los numeros es: %d",acumulador);
   return (0);
}
