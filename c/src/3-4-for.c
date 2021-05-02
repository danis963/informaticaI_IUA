#include <stdio.h>
int main()
{
  int var_control       =0;
  int positivos_cantidad=0;
  int negativos_cantidad=0;
  int numero            =0;
  for (var_control=0; var_control < 10; var_control++)
  {
        printf("Ingrese el numero %d\n",var_control);
        scanf("%d",&numero);
        if(numero>=0)
        {
          positivos_cantidad=positivos_cantidad+1;
        }
        else
        {
          negativos_cantidad=negativos_cantidad+1;
        }
  }
  printf("%d positivos ",positivos_cantidad);
  printf("%d negativos ",negativos_cantidad);
 return (0);
}
