#include <stdio.h>
int main()
{
    int   suma=0;
    int   dato=0;
    while(true)
    {
      printf("Ingrese un numero \n");
      scanf("%d",&dato);

      if(dato==-10)
      {
        break;
      }

      if(dato==100)
      {
        continue;
      }
      suma=suma+dato;
    }

    printf("La suma de los numeros ingresados es %d", suma);
   return (0);
}
