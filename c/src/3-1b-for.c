#include <stdio.h>
int main()
{
  int ii=0;
  int numero=0;
  int acumulador=0;
  printf("Ingrese el valor N\n");
  scanf("%d",&numero);
  for (ii=0; ii<=numero; ii++)
  {
        acumulador+=ii;
  }
 printf("La suma de los numeros comprendidos entre %d y %d es %d\n",0,numero,acumulador);
 return (0);
}
