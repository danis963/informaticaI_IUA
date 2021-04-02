#include <stdio.h>
int main()
{   int opcion=0;
    printf("Ingrese una numero entre 0-2\n");
    scanf("%d",&opcion);
    switch(opcion){
     case 0:
            printf("Usted ingreso la opcion 0 \n");
            break;
     case 1:
            printf("Usted ingreso la opcion 1 \n");
            break;
     case 2:
            printf("Usted ingreso la opcion 2 \n");
            break;
     default:
            printf("Usted ingreso una opcion invalida\n");
            break;}
}
