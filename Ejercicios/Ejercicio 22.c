#include <stdio.h>
#include <math.h>

int main()
{
    float grados, grados1;
    printf("Coloque su valor en grados Celsius\n");
    scanf("%f",&grados);
    grados1=(grados*9/5)+32;
    printf("Su valor en grados Fahrenheit es de: %f",grados1);
    
    return 0;
}