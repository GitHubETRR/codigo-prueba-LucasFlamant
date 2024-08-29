#include <stdio.h>
#include <math.h>

int main()
{
    float lado, lado1, lado2,semi,area;
    printf("Coloque el valor de sus lados, en centímetros, del triángulo\n");
    scanf("%f\n%f\n%f",&lado,&lado1,&lado2);
    semi= (lado+lado1+lado2)/2;
    area= semi*(semi-lado)*(semi-lado1)*(semi-lado2);
    area=sqrt (area);
    printf("El área de su ángulo es de: %f",area);

    return 0;

}