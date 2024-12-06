#include <stdio.h>

int main()
{
    unsigned int num, cifra;
    printf("Coloque su número entero de dos cifras\n");
    scanf("%d",&num);
    if (num>10)
    {
        cifra = num % 10;
        printf("Sú última cifra del número va a ser: %d",cifra);

    }
    else 
    { 
        printf("Su número no es valido, tiene que ser entero");
    }

    return 0;
}
