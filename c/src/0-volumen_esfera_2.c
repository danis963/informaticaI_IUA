#include <stdio.h>
#include<stdbool.h>  
int main()
{
  int edad=0;
  float peso=0;
  bool pelado;
  pelado=false;

  if(pelado)
	  printf("mixer es true");
  else
	  printf("Mixer es falso");
  printf("Ingrese su edad \n");
  scanf("%d",&edad);
  printf("Ingrese su peso\n");
  scanf("%f",&peso);
  printf("Su edad es %d y su peso %f\n",edad,peso);
}
