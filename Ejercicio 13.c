#include <stdio.h>

int main()
{
    float kg;
    int precio;
    printf("Ingrese el valor del producto por kg\n");
    scanf("%d",&precio);
    printf("Ingrese la cantidad de kg\n");
    scanf("%f",&kg);
    precio=kg*precio;
    printf("El precio de su compre es de %d",precio);
    return 0;
}
