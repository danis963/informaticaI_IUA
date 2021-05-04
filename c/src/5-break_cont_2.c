#include <stdio.h>
int main()
{
    int   ii  =0;
    int   suma=0;
    int   dato=0;
    for(ii=0;ii<10;ii++)
    {
      printf("Ingrese el dato %d\n",ii);
      scanf("%d",&dato);




      if(dato%2==0)
      {
        continue;
      }

      suma=suma+dato;
    }

    printf("La suma de los numeros ingresados es %d", suma);
   return (0);
}
