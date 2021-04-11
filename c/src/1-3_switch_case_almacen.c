#include <stdio.h>


/*Diseñar y codificar un programa que permita simular una calculadora.
Luego de recibir dos operandos enteros, se deben poder realizar las siguientes opciones:

1- Sumar
2- Restar
3- Multiplicar
4- Dividir
*/


int main()
{
  int    operacion=0;
  int    operando_1=0;
  int    operando_2=0;
  float  resultado=0;

  printf("Ingrese el operando 1\n");
  scanf("%d",&operando_1);

  printf("Ingrese el operando 2\n");
  scanf("%d",&operando_2);

  printf("Ingrese la operacion que desea realizar: \n\n\n");
  printf("\t\t 1-Sumar \n");
  printf("\t\t 2-Restar \n");
  printf("\t\t 3-Multiplicar \n");
  printf("\t\t 4-Dividir \n");

  scanf("%d",&operacion);
  switch(operacion)
  {
    case 1:
            resultado = operando_1 + operando_2;
            break;

    case 2:
            resultado = operando_1 - operando_2;
            break;
    case 3:
           resultado = operando_1 * operando_2;
            break;
    case 4:
            resultado = operando_1 / operando_2;
            break;
    default:
            printf("La operación seleccionada es invalida\n");
            break;
  }

  printf("El resultado de la operación es %f\n\n",resultado);
  return (0);
}
