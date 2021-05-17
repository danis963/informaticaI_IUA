#define FIL 2
#define COL 3
#include<stdio.h>
int main(void)
{
    int ii;
    int jj;
    int array[FIL][COL];
    int dato=0;
    for(ii=0;ii<FIL;ii++)
    {
      for(jj=0;jj<COL;jj++)
      {
        printf("Ingrese el elemento %d %d \n",ii,jj);
        scanf("%d",&dato);
        array[ii][jj]=dato;
      }
    }

    for(ii=0;ii<FIL;ii++)
    {
        for(jj=0;jj<COL;jj++)
        {
            printf("[%d][%d] = %d\t",ii,jj,array[ii][jj]);
        }
        printf("\n");
    }
    return(0);
}
