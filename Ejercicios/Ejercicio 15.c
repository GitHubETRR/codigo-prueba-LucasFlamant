#include <stdio.h>

int main()
{
    float base;
    float altura;
    float área;
    float perímetro;
 
    printf("ingrese el valor de la base de su rectángulo\n");
    scanf("%f",&base);
    printf("Ingrese la altura de su rectángulo\n");
    scanf("%f",&altura);
    área=base*altura;
    perímetro=(2*base)+(2*altura);
    printf("La base de su rectángulo es de %f y la altura es %f",área,perímetro);
    

    return 0;
}
