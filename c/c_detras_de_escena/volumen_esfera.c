/*ESTE PROGRAMA CALCULA EL VOLUMEN DE UNA ESFERA
 * OBSERVAR QUE ESTE COMENTARIO SERÁ REMOVIDO
 * POR EL PREPROCESADOR*/


#include <stdio.h>
#define PI 3.141516
int main()
{
  float radio=0;
  float volumen=0;
  printf("Ingrese el radio de la esfera \n");
  scanf("%f",&radio);

  volumen=3*PI*radio/4;

  printf("El volumen de la esfera de radio %f es %f\n",radio, volumen);
}
