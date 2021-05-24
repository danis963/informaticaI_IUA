#define FIL 2
#define COL 5
#include<stdio.h>
#include <stdlib.h>
int main(void)
{
    int array_2d[FIL][COL];
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


    for(ii=0;ii<FIL;ii++)
    {
      for(jj=0;jj<COL;jj++)
      {
        printf("%d\t",array_2d[ii][jj]);
      }
      printf("\n");
    }

return(0);
}
    
