/*DISEÑAR Y CODIFICAR UN PPROGRAMA TOME POR TECLADO
UN NÚMERO ENTERO E IMPRIMA POR PANTALLA LAS SIGUIENTES EXPRESIONES:
SI EL NÚMERO ESTÁ COMPRENDIDO ENTRE 0 Y 10: DECENA
SI EL NÚMERO ESTÁ COMPRENDIDO ENTRE 11 Y 99: CENTENA
SI EL NÚMERO ESTÁ COMPRENDIDO ENTRE 100 Y 999: MILES
*/

#include <stdio.h>
int main()
{
  int numero=0;

  printf("Ingrese un numero \n");
  scanf("%d",&numero);

 if(numero>0) && (numero<10)
 {
   print("El numero ingreado es positivo y menor que 10");
 }
  return (0);
}
