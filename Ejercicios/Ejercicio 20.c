#include <stdio.h>

int main()
{
   unsigned int seg, min, hora, segundo;
   
   printf("Ingrese la cantidad de segundos\n");
   scanf("%d", &seg);
   
    if(seg<86400){
        hora=seg/3600;
        min=(seg%3600)/60;
        segundo=(seg%3600)%60;
        printf("Esa cantidad de segundos equivalen a %d horas, %d minutos y %d segundos",hora,min,segundo);
    }
    else{
    printf("La cantidad de segundos es mayor a 86400");
   }

   return 0;
}
