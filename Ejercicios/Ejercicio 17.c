#include <stdio.h>

int main()
{
    int hora, minutos, segundos;
    int hora2, minutos2,segundos2;
    int hora3, minutos3, segundos3;
    printf("Este es mi programa de suma de dos tiempos. Ingrese la hora\n");
    scanf("%d",&hora);
    printf("Ingrese los minutos\n");
    scanf("%d",&minutos);
    printf("Ingrese los segundos\n");
    scanf("%d",&segundos);
    printf("Su primer tiempo queda de la siguiente manera:%dh %dm %ds\n",hora,minutos,segundos);
    printf("Ingrese la hora de su segundo tiempo\n");
    scanf("%d",&hora2);
    printf("Ingrese los minutos\n");
    scanf("%d",&minutos2);
    printf("Ingrese sus segundos\n");
    scanf("%d",&segundos2);
    printf("Su segundo tiempo queda de la siguiente manera:%dh %dm %ds\n",hora2,minutos2,segundos2);
    segundos3 = segundos + segundos2;
    minutos3 = minutos + minutos2;
    hora3 = hora + hora2;
    if (segundos3>59)
    {
        segundos3 = segundos3 - 60;
        minutos3 = minutos3 + 1;
    }
    if (minutos3>59)
    {
        minutos3 = minutos3 - 60;
        hora3 = hora3 + 1;
    }
    
    printf("Su tiempo quedará de la siguiente manera: %dh %dm %ds",hora3, minutos3, segundos3);
    
    return 0;
}
