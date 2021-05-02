#include <stdio.h>
int main()
{
    int numero=0;
    do
    {
        printf("Ingrese un numero entero\n");
        printf("Para salir ingrese -1\n");
        scanf("%d",&numero);
    }while(numero!=-1);
   return (0);
}
