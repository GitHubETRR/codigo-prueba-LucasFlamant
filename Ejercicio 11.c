#include <stdio.h>

int main()
{
    
    float pulg,cm;
    int pies;
    
    printf ("Ingrese su valor en Centrimetros\n");
    scanf ("%f",&cm);
    pies = cm / 30.48;
    pulg = cm * 0.39;
    printf ("Su valor en pies en %d, su valor en pulgadas es %f",pies,pulg);
    return 0;
}
