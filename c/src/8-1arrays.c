#define TAM 10
#include<stdio.h>
#include <stdlib.h>
int main(void)
{
    int array_orig      [TAM];
    int array_convertido[TAM];
    int numero;
    int ii;
    for(ii=0;ii<TAM;ii++)
    {
      printf("Ingrese el numero %d\n",ii);
      scanf("%d",&numero);
      array_orig[ii]=numero;
    }

    for(ii=0;ii<TAM;ii++)
    {
        array_convertido[ii]=array_orig[ii]*(-1);
    }
    
    printf("\nArreglo original \n");
    for(ii=0;ii<TAM;ii++)
    {
      printf("%d ",array_orig[ii]);
    }
    
    printf("\nArreglo convertido \n");
    for(ii=0;ii<TAM;ii++)
    {
      printf("%d ",array_convertido[ii]);
    }

return(0);
}
    
