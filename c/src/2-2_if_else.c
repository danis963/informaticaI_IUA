/*DISEÑAR Y CODIFICAR UN PROGRAMA EN C QUE TOME
UN NÚMERO ENTERO POR TECLADO E INDIQUE SI ES POSITIVO
O NEGATIVO*/

#include <stdio.h>
int main()
{
  int numero=0;
  printf("Ingrese un número entero\n");
  scanf("%d",&numero);

  if(numero<0)
  {
    printf("El número ingresado es negativo\n");
  }
  else
  {
    if(numero == 0)
    {
      printf("El número ingresado es cero \n");
    }
    else
    {
    printf("El número ingresado es positivo \n");
    }
  }

}
