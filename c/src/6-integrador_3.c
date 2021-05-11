#include <stdio.h>
#include <stdlib.h>
int main()
{
  int codigo=0;

  int vendidos_platea_cubierta=0;
  float ocupacion_platea_cubierta=0;

  int vendidos_platea_descubierta=0;
  float ocupacion_platea_descubierta=0;
  
  int vendidos_popular=0;
  float ocupacion_popular=0;

  float ocupacion_total=0;

  int recaudacion=0;
  
  do
  {
    printf("Ingrese el código de la locación a vender\n");
    scanf("%d",&codigo);
    switch(codigo)
    {
      case 10:
              if(vendidos_platea_cubierta<1400)
              {
                vendidos_platea_cubierta+=1;
                printf("Lugar asignado correctamente\n");
              }
              else
              {
                printf("La venta no se pudo concretar. No hay lugar disponible en esta locación\n");
              }
              break;
      case 20:
              if(vendidos_platea_descubierta<2000)
              {
                vendidos_platea_descubierta+=1;
                printf("Lugar asignado correctamente\n");
              }
              else
              {
                printf("La venta no se pudo concretar. No hay lugar disponible en esta locación\n");
              }

              break;
      case 30:
              if(vendidos_popular<5000)
              {
                vendidos_popular+=1;
                printf("Lugar asignado correctamente\n");
              }
              else
              {
                printf("La venta no se pudo concretar. No hay lugar disponible en esta locación\n");
              }
              break;
      case 0:
            printf("Venta finalizada\n\n\n");
            break;
      default:
            printf("Código invalido\n");
            break;
      }     


    
  }while(codigo!=0);



    ocupacion_platea_cubierta=vendidos_platea_cubierta*100.0/1400.0;
    ocupacion_platea_descubierta=vendidos_platea_descubierta*100.0/2000.0;
    ocupacion_popular=vendidos_popular*100.0/5000.0;

    ocupacion_total=(vendidos_platea_cubierta+vendidos_platea_descubierta+vendidos_popular)*100.0/8400.0;

    recaudacion=vendidos_platea_cubierta*100 + vendidos_platea_descubierta*70 + vendidos_platea_descubierta*50;




  printf("El porcentaje de ocupación de la platea cubierta es de %f  %\n ",ocupacion_platea_cubierta);
  printf("El porcentaje de ocupación de la platea descubierta es de %f %\n",ocupacion_platea_descubierta); 
  printf("El porcentaje de ocupación de la popular es de %f %\n",ocupacion_popular);
  printf("El porcentaje de ocupación del estadio es de %f %\n",ocupacion_total);
  printf("La recaudación total es de %d $\n",recaudacion);

   return (0);
}
