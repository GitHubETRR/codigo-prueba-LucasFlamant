#include <stdio.h>

int main()
{
    int numero, cifra, cifra1,cifra2;


    printf("Coloque su número entero de tres cifras\n");
    scanf("%d",&numero);
    cifra=numero / 100;
    cifra1=(numero % 100) / 10;
    cifra2=numero % 10;

    printf("Sus números separados son:\n%d\n%d\n%d", cifra, cifra1, cifra2);


    return 0;
}
