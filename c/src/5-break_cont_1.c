#include <stdio.h>
int main()
{
    int cantidad=0;
    int nota=0;
    float suma=0;
    float promedio=0;

    printf("Ingrese la nota del alumno %d. Para salir ingrese una calificacion negativa\n",cantidad);
    scanf("%d",&nota);
    while(True)
    {
        suma=suma+nota;
        cantidad=cantidad+1;
        printf("Ingrese la nota del alumno %d. Para salir ingrese una calificacion negativa\n",cantidad);
        scanf("%d",&nota);
    }

    promedio=suma/cantidad;
    printf("El promedio del curso de %d alumnos es %f\n",cantidad,promedio);
   return (0);
}
