#include <stdio.h>
#include <stdlib.h>

int Addition(int a, int b)
{
    int res = a + b;

    return res;
}

int main()
{
    printf("FUNCIONES!\n");

    int additionRes = Addition(3, 4);
    printf("Resultado es: %i\n\n", additionRes);

    printf("Ingrese la base del número\n");
    int base, exponente;
    scanf("%i", &base);
    printf("Ingrese el exponente del número\n");
    scanf("%i", &exponente);
    int potenciar = potencia(base, exponente);
    printf("Resultado de %i elevado a %i es: %i \n\n", base, exponente, potenciar);

    return 0;
}

int potencia(int a, int b)
{
    int multiplicador = a;
    for(int i = 0; i < b-1; i++)
    {
        a = a * multiplicador;
    }
    return a;
}
