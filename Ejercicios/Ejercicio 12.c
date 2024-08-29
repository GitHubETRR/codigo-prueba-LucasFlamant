#include <stdio.h>

int main()
{
    int días, años;
    
    printf("Ingrese su edad\n");
    scanf("%d",&años);
    días = años*365;
    printf("Su edad en días es %d",días);
    return 0;
}
