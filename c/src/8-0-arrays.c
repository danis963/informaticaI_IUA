#define TAM 10
#include<stdio.h>
#include <stdlib.h>
int main(void)
{
    time_t t;
    srand((unsigned) time_t(&t));
    int ii;
    int array[TAM];
    int numero=0;
    int contador=0;
    for(ii=0;ii<TAM;ii++)
    {
      array[ii]=rand() % 21;
    }

    printf("El arreglo ha sido cargado\n");
    printf("Ingrese el número que desea saber la cantidad de veces que se repite\n");
    scanf("%d",&numero);

    for(ii=0;ii<TAM;ii++)
    {
      if(array[ii]==numero)
      {
        contador+=1;
      }
    }

    printf("El número %d se repite %d veces\n",numero,contador);
}
