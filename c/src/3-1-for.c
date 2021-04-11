#include <stdio.h>
int main()
{
  int var_control=0;
  int suma=0;
  int numero=0;

  for (var_control=0; var_control < 10; var_control++)
  {
        printf("Ingrese el numero %d\n",var_control);
        scanf("%d",&numero);
        suma+=numero;
  }
  printf("La suma de todos los numeros es %d",suma);
 return (0);
}
