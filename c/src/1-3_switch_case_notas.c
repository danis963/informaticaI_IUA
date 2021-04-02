#include <stdio.h>


/*Codificar un programa que permita conocer el estado de un alumno
en función de la nota de su parcial. Para la codificación se debe usar
una estructura selectiva multiple*/
int main()
{
  int nota=0;
  printf("Ingrese la nota de su parcial\n");
  scanf("%d",&nota);
  switch(nota)
  {
    case 1:
    case 2:
    case 3:
            printf("El alumno esta reprobado \n");
            break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
            printf("El alumno esta aprobado\n");
            break;
    default:
            printf("La nota es invalida\n");
            break;
  }
}
