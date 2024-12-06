#include <stdio.h>

int main()
{
    
    float radio, altura, area, volumen, PI;
    PI = 3.14;

    printf("Introduzca el radio y la altura de un cilindro para saber el área y el volumen del mismo\n");
    printf("Coloque el valor del radio\n");
    scanf("%f",&radio);
    printf("Coloque el valor de la altura\n");
    scanf("%f",&altura);
    area= 2*PI*radio*(radio+altura);
    volumen= PI*radio*radio*altura;
    printf("Su valor del área es de: %f\n",area);
    printf("Su valor de volumen es de : %f",volumen);

    return 0;
}