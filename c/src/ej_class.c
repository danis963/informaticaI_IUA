#include <stdio.h>
int main()
{
  int numero_1=0;
  int numero_2=0;
  int numero_3=0;

  int suma=0;
  int multiplicacion=0;
  float promedio=0;
  printf("Ingrese el numero 1 \n");
  scanf("%d",&numero_1);
  printf("Ingrese el numero 2 \n");
  scanf("%d",&numero_2);
  printf("Ingrese el numero 3 \n");
  scanf("%d",&numero_3);


  suma=numero_1+numero_2+numero_3;
  multiplicacion=numero_1*numero_2*numero_3;
  promedio=suma/3.0;


 printf("El valor de la suma es %d",suma);
 printf("El valor de la multiplicacion es %d",multiplicacion);
 printf("El valor del promedio es %f",promedio);
 return (0);
}
