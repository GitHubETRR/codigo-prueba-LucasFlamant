#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,raiz,raiz1;

    printf("Ingrese los valores de un polinomio grado 2, para saber las raices\n");
    printf("Ingrese el valor de 'a'\n");
    scanf("%f",&a);
    printf("Ingrese el valor de 'b'\n");
    scanf("%f",&b);
    printf("Ingrese el valor de 'c'\n");
    scanf("%f",&c);
    raiz=(-b + sqrt(b*b-4*a*c))/(2*a);
    raiz1=(-b - sqrt(b*b-4*a*c))/(2*a);
    printf("La primera raiz de tu polinomio es: %f\n",raiz);
    printf("La segunda raiz del polinomio es: %f",raiz1);


    return 0;
}