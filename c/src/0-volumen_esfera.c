#include <stdio.h>


int main()
{
  float radio  =0;
  float volumen=0;

  printf("Ingrese el radio de la esfera \n \n \n \n \n");
  scanf("%f",&radio);

  volumen=3*3.14*radio/4;

  printf("El volumen de la esfera de radio %f es %f\n",radio, volumen);
   return (0);
}
