#include<stdio.h>

int main(void)
{
    int ii;
    int array[10];
    int dato=0;
    for(ii=0;ii<10;ii++)
    {
      printf("Ingrese el elemento %d\n",ii);
      scanf("%d",&dato);
      array[ii]=dato;
    }

    for(ii=0;ii<10;ii++)
    {
      printf("Soy el elemento %d y valgo %d\n",ii,array[ii]);
    }
}
