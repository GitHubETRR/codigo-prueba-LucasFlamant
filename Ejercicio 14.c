#include <stdio.h>

int main()
{
    float ang; 
    float ang2;
    float angulo;
    printf("Ingrese el valor de uno de los angulos del triangulo\n");
    scanf("%f",&ang);
    printf("Ingrese su segundo valor del angulo del triangulo\n");
    scanf("%f",&ang2);
    angulo=180 - (ang + ang2);
    printf("Su angulo restante es %f",angulo);
    return 0;
}
