#define TAM 5
#include<stdio.h>
#include <stdlib.h>
int main(void)
{
    float temperatura[TAM];
    float humedad[TAM];
    float temp_max=0;
    float temp_min=0;
    float hum_max=0;
    float hum_min=0;
    float dato;
    int ii;
    for(ii=0;ii<TAM;ii++)
    {
      printf("Ingrese la muestra de temperatura de la hora %d\n",ii);
      scanf("%f",&dato);
      temperatura[ii]=dato;
      printf("Ingrese la muestra de humedad de la hora %d\n",ii);
      scanf("%f",&dato);
      humedad[ii]=dato;
    }

    for(ii=0;ii<TAM;ii++)
    {
        if(ii==0)
        {
          temp_max=temp_min=temperatura[ii];
          hum_max=hum_min=humedad[ii];
        }
        else
        {
          if(temperatura[ii]>temp_max)
          {
            temp_max=temperatura[ii];
          }

          if(temperatura[ii]<temp_min)
          {
            temp_min=temperatura[ii];
          }

          if(humedad[ii]<hum_min)
          {
            hum_min=humedad[ii];
          }

          if(humedad[ii]>hum_max)
          {
            hum_max=humedad[ii];
          }
        }
    }
    
    printf("La temp. max. del dia fue de %f ℃ y la min %f ℃ \n",temp_max,temp_min);
    printf("La hum.  max. del dia fue de %f %% y la min %f %% \n",hum_max,hum_min);


return(0);
}
    
