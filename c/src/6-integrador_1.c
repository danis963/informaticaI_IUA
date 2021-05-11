#include <stdio.h>
#include <stdlib.h>
int main()
{
    time_t t;
    srand((unsigned) time(&t));

    int   numero_aleatorio=rand() % 10;
    int   numero=0;
    int   intentos=0;
    int flag_encontrado=0;

    do
    {
      printf("Ingrese un número comprendido entre 0 y 10\n");
      scanf("%d",&numero);
      if(numero==numero_aleatorio)
      {

          flag_encontrado=1;
      }
      else
      {
          intentos+=1;
          if(numero_aleatorio>numero)
          {
          printf("El número incógnita es mayor que el ingresado\n");
          }
          else
          {
            printf("El número incógnita es menor que el ingresado\n");
          }
      }
    } while((flag_encontrado==0)&&(intentos<3));

    if(flag_encontrado==0)
    {
      printf("Game over\n\n");
    }
    else
    {
      printf("Felicitaciones ha acertado el número en el intento %d\n",intentos+1);
    }


   return (0);
}
