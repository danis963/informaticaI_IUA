/*DISEÑAR Y CODIFICAR UN PROGRAMA EN C QUE TOME
DOS NUMEROS ENTEROS POR TECLADO Y PUEDA IDENTIFICAR EL MAYOR.
SI LOS NUMEROS SON IGUALES, SE DEBE INFORMAR ESTA CONDICIÓN POR PANTALLA*/

#include <stdio.h>
int main()
{
  int numero1=0;
  int numero2=0;
  printf("Ingrese el primer número\n");
  scanf("%d",&numero1);
  printf("Ingrese el segundo número\n");
  scanf("%d",&numero2);
  if(numero1==numero2)
  {
    printf("Los números ingresados son iguales\n");
  }
  else
  {
    if(numero1>numero2)
    {
      printf("El número %d es mayor que %d \n",numero1,numero2);
    }
    else
    {
      printf("El número %d es mayor que %d \n",numero2,numero1);
    }
  }
 return (0);
}
