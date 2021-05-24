#define FIL 2
#define COL 5


#include<stdio.h>
#include <stdlib.h>
int main(void)
{
    int array_2d[FIL][COL];
    int acum_col=0;
    int ii;
    int jj;
    int dato=0;

    for(ii=0;ii<FIL;ii++)
    {
      for(jj=0;jj<COL;jj++)
      {
        printf("Ingrese el elemento [%d][%d] \n",ii,jj);
        scanf("%d",&dato);
        array_2d[ii][jj]=dato;
      }
    }



printf("Impresión de arreglo cargado\n");
for(ii=0;ii<FIL;ii++)
{
  for(jj=0;jj<COL;jj++)
  {
    printf(" %d \t",array_2d[ii][jj]);
  }
  printf("\n");
}


printf("\nSuma de sus filas\n");


for(ii=0;ii<FIL;ii++)
    {
      for(jj=0;jj<COL;jj++)
      {
        printf(" %d ",array_2d[ii][jj]);
        acum_col+=array_2d[ii][jj];
        if(jj==COL-1)
        {
          printf("= %d",acum_col);
          acum_col=0;
        }
        else
        {
          printf("+");
        }
      }
      printf("\n");
    }

return(0);
}
    
