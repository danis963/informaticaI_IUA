#include<stdio.h>
#include <stdlib.h>
int main(void)
{
 
 int *ptr=NULL;
 int  val=5;
 
 ptr=&val;

 printf("Valor de val %d\n",val);
 printf("Posicion de memoria de val %X\n",&val);
 printf("Valor de ptr %X\n",ptr);
 printf("Posicion de memoria de ptr %X\n",&ptr);
 printf("Val accedido por ptr %d\n",*ptr);

return(0);
}
     
 
