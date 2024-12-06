#include <stdio.h>

int main(){
    
    float pulg,cm;
    int pies;
    
    printf ("Ingrese su valor en Centrimetros\n");
    scanf ("%f",&cm);
    pies = cm / 30.48;
    pulg = cm / 2.54;
    printf ("Su valor en pies es de %d\nSu valor en pulgadas es de %f",pies,pulg);
    return 0;
}