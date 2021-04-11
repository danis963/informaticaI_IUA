/*Diseñar y codificar un programa en C que reciba
100 numeros ingresados por teclado e imprima la cantidad de positivos y negativos.
El cero es considerado positivo*/

#define CANTIDAD 10
#include <stdio.h>
int main()
{
  int var_control=0;
  int positivos_cantidad=0;
  int negativos_cantidad=0;
  int numero;
  for (var_control=0; var_control < CANTIDAD; var_control++)
  {
        printf("Ingrese el numero %d\n",var_control);
        scanf("%d",&numero);
        if(numero>=0)
        {
          positivos_cantidad+=1;
        }
        else
        {
          negativos_cantidad+=1;
        }
  }
  printf("Se ingresaron %d numeros ",CANTIDAD);
  printf("%d positivos ",positivos_cantidad);
  printf("%d negativos ",negativos_cantidad);
 return (0);
}
