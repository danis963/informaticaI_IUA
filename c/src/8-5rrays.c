#define FIL 30
#define COL 4


#include<stdio.h>
#include <stdlib.h>
int main(void)
{
  int alumnos[FIL][COL];
  int ii;
  int jj;
  int dato;
  float prom=0;
  for(ii=0;ii<FIL;ii++)
  {
    for(jj=0;jj<COL;jj++)
    {
      if(jj==0)
      {
        printf("Ingrese legajo del alumno %d \n",ii);
      }
      else
      {
        printf("Ingrese la nota %d \n",jj);
      }
         
        scanf("%d",&dato);
        alumnos[ii][jj]=dato;
    }
  }

printf("\n\nImpresión de los datos \n");
printf("====================== \n");
printf("LEGAJO\t N0\t N1\t N2\t \n");
for(ii=0;ii<FIL;ii++)
{
  for(jj=0;jj<COL;jj++)
  {
      printf("  %d \t",alumnos[ii][jj]);
  }
      printf("\n");
}


printf("\n\nImpresión de los promedios \n");
printf("========================== \n");
printf("LEGAJO\t Promedio \n");
for(ii=0;ii<FIL;ii++)
{
  for(jj=1;jj<COL;jj++)
  {
    prom+=alumnos[ii][jj];
  }
      prom=prom/3.0;
      printf("%d \t %f",alumnos[ii][0],prom);
      printf("\n");
}



return(0);
}
    
