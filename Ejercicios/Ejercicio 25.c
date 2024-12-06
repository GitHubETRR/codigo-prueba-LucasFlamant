#include <stdio.h>

int main()
{
    float horas,anti,sxh,sueldo,sxa;
    sxa=90;
    //sueldo por antiguedad//
    sxh= 562.5;
    //sueldo por hora//

    printf("Coloque la cantidad de horas de trabajo y su antiguedad en la empresa\n");
    printf("Cantidad de horas trabajadas:\n");
    scanf("%f",&horas);
    printf("Antiguedad en la empresa:\n");
    scanf("%f",&anti);
    sueldo=(horas*sxh)+(anti*sxa);
    printf("Su sueldo neto es de: %f", sueldo);

    return 0;
}