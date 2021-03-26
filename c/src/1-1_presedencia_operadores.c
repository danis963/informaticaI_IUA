#include <stdio.h>
int main()
{
  float m=0; /*Pendiente*/
  float y=0; /*Variable dependiente*/
  float x=0; /*Variable independiente*/
  float b=0; /*Ordenada al origen*/
  printf("Ingrese el valor de la pendiente \n");
  scanf("%f",&m);
  printf("Ingrese el valor de la ordenada al origen \n");
  scanf("%f",&x);
  printf("Ingrese el valor de la variable indep \n");
  scanf("%",&b);
  y=m*x+b; /*Operacion*/
  printf("el valor de y(%f)=%f \n",x,y);

}
