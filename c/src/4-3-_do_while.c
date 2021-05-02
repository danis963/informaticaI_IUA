#include <stdio.h>
int main()
{
    int tope_n1=0;
    int tope_n2=0;
    int ii=0;
    printf("Ingrese el valor de N1\n");
    scanf("%d",&tope_n1);

    printf("Ingrese el valor de N2\n");
    scanf("%d",&tope_n2);

    ii=tope_n1;
    do
    {
        printf("%d\n",ii);
        ii=ii+1;
    }
    while((ii>tope_n1) && (ii<=tope_n2));
   return (0);
}
