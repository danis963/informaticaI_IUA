#include <stdio.h>
int main()
{
    int cantidad=0;
    int numero=0;
    while(numero!=-1)
    {
        printf("Ingrese un numero entero\n");
        printf("Para salir ingrese -1\n");
        scanf("%d",&numero);
        cantidad=cantidad+1;
    }
    printf("La cantidad de números ingresados es %d\n",cantidad);
   return (0);
}
