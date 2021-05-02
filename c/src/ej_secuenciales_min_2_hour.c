/*Realiza un programa que reciba una cantidad
de minutos y muestre por pantalla a cuantas horas y minutos corresponde.
Por ejemplo: 1000 minutos son 16 horas y 40 minutos.
*/

#include <stdio.h>
int main()
{
  int q_minutos=0;
  int horas=0;
  int minutos=0;

  printf("Ingrese la cantidad de minutos \n");
  scanf("%d",&q_minutos);
  minutos=q_minutos % 60;
  horas=(q_minutos-minutos)/60;
  printf("%d Minutos equivalen a %f horas y %d minutos\n\n",q_minutos,horas,minutos);

  return (0);

}
