#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ii=0;
    int aprobados=0;
    int reprobados=0;
    float reprobados_porc=0;
    float aprobados_porc=0;
    float promedio=0;
    int nota=0;
    int nota_max=0;
    int nota_min=0;
    for(ii=0;ii<11;ii++)
    {
      printf("Ingrese la nota para el alumno %d \n",ii);
      scanf("%d",&nota);
      if(ii==0)
      {
        nota_max=nota_min=nota;
      }

      if(nota>nota_max)
      {
          nota_max=nota;
      }
      if(nota<nota_min)
      {
          nota_min=nota;
      }
      if(nota>=4)
      {
          aprobados+=1;
      }
      else
      {
          reprobados=reprobados+1;
      }

      promedio=promedio+nota;
    }
    aprobados_porc = aprobados/11.0;
    reprobados_porc = reprobados/11.0;
    promedio = promedio/11.0;

     printf("La nota mas alta del curso fue: %d \n",nota_max);
     printf("La nota mas baja del curso fue: %d \n",nota_min);
     printf("El promedio general del curso fue: %f \n",promedio);
     printf("Procentaje de aprobados: %f \n",reprobados_porc);
     printf("Procentaje de reprobados: %f  \n",aprobados_porc);

   return (0);
}
