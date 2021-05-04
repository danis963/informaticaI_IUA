#include <stdio.h>
int main()
{
    int numero=0;
    printf("Para salir ingrese -1\n");
    scanf("%d",&numero);
    while(numero!=-1)
    {
        printf("Ingrese un numero entero\n");
        printf("Para salir ingrese -1\n");
        scanf("%d",&numero);
    }
    printf("El ciclo repetitivo ha terminado");
   return (0);
}
