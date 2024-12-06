#include <stdio.h>

int main()
{
    float lado;
    float perímetro;
    printf("Ingrese su valor del lado de un cuadrado en metros\n");
    scanf("%f",&lado);
    perímetro = lado * 4;
    printf("El valor del perímetro de su cuadrado es %f",perímetro);
    return 0;
}
