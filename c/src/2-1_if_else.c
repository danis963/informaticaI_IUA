#include <stdio.h>
int main()
{
  int nota=0;
  printf("Ingrese la nota del examen\n");
  scanf("%d",&nota);

  if(nota<4)
  {
    printf("El alumno no aprobo el examen\n");
  }
  else
  {
    printf("El alumno aprobo el examen\n");
  }
}
