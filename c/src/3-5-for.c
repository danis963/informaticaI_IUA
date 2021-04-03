/*Diseñar y codificar un programa en C que reciba
la cantidad de filas y columnas de una matriz y luego imprima 
dicha matriz donde cada elemento vale la suma de su posicion*/


#include <stdio.h>
int main()
{
  int cantidad_columnas=0;
  int cantidad_filas=0;
  int ctrl_filas=0;
  int ctrl_columnas=0;

  printf("Ingrese la cantida de columnas de la matriz \n");
  scanf("%d",&cantidad_columnas);

  printf("Ingrese la cantida de filas de la matriz \n");
  scanf("%d",&cantidad_filas);

  for (ctrl_filas=0; ctrl_filas < cantidad_filas; ctrl_filas++)
  {
      for (ctrl_columnas=0; ctrl_columnas < cantidad_columnas; ctrl_columnas++)
      {
        printf("%d\t",(ctrl_filas+ctrl_columnas)); 
      }
      printf("\n");
  }

}
