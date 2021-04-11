/*DISEÑAR Y CODIFICAR UN PROGRAMA EN C QUE TOME
LAS COORDENADAS  DE UN PUNTO EN EL PLANO CARTESIANO E IMPRIMA POR PANTALLA
EL CUADRANTE AL QUE PERTENECE EL PUNTO
*/

#include <stdio.h>
int main()
{
  int coordenada_x=0;
  int coordenada_y=0;

  printf("Ingrese la coordenada X\n");
  scanf("%d",&coordenada_x);
  printf("Ingrese la coordenada Y\n");
  scanf("%d",&coordenada_y);
  if(coordenada_x==0 && coordenada_y==0)
  {
    printf("El punto ingresado es el origen");
  }
  else
  {
      if((coordenada_x>0) && (coordenada_y>0))
      {
        printf("El punto pertenece al primer cuadrante\n");
      }
      else
      {
        if((coordenada_x<0) && (coordenada_y>0))
        {
          printf("El punto pertenece al segundo cuadrante\n");
        }
        else
        {
          if((coordenada_x<0) && (coordenada_y<0))
          {
            printf("El punto pertenece al tercer cuadrante\n");
          }
          else
          {
            printf("El punto pertenece al cuarto cuadrante\n");
          }
        }
      }
  }
   return (0);
}
