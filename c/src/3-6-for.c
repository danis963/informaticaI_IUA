#define CANTIDAD_ALUMNOS    2
#include <stdio.h>
int main()
{
  int i=0; int j=0; int nota=0; int acumulador=0; 
  float prom;
  for (i=0; i<CANTIDAD_ALUMNOS; i++)  
  {
      for(j=0;j<3;j++)
      {
        printf("Ing. la nota %d del alumno %d\n",j,i);
        scanf("%d",&nota);
        acumulador+=nota;
      }
      prom = acumulador / 3.0;
      printf("Promedio del alumno %d es %f\n",i,prom);
  }

}
