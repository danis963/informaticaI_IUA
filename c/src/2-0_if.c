#include <stdio.h>
int main() {
  int nota;
  printf("Ingrese la nota del examen\n");
  scanf("%d", &nota);

  if( nota < 4)
  {
    printf("El alumno no aprobo el examen\n");
  }


  if( nota >= 4)
  {
    printf("El alumno aprobo el examen\n");
  }
   return (0);
}
