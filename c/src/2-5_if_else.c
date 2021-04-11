/*DISEÑAR Y CODIFICAR UN PPROGRAMA TOME POR TECLADO
LA LONGITUD DE LOS TRES LADOS DE UN TRIANGULO Y DETERMINE
SI ES EQUILATERO, ISOSCELES O ESCALENO Y ADEMAS, IMPRIMA EL PERÍMETRO

*/

#include <stdio.h>
int main()
{
  int lado_1=0;
  int lado_2=0;
  int lado_3=0;
  int perimetro=0;


  printf("Ingrese el primer lado\n");
  scanf("%d",&lado_1);

  printf("Ingrese el primer lado\n");
  scanf("%d",&lado_2);

  printf("Ingrese el segundo lado\n");
  scanf("%d",&lado_3);

  perimetro = lado_1 + lado_2  + lado_3;

  if((lado_1==lado_2) && (lado_1==lado_3))
  {
    printf("El triángulo es equilatero \n");
  }
  else
  {
      if((lado_1==lado_2) || (lado_2==lado_3))
      {
        printf("El triángulo es  isosceles\n");
      }
      else
      {
      printf("El triángulo es  escaleno\n");
      }

  }
   return (0);
}
