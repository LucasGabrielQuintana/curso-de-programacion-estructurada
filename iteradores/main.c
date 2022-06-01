#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador While\n");
    int limit;

    printf("Escriba el limite \n");
    scanf("%i", &limit);

    int i = 1;

    while(i <= limit)
    {
        printf("Numero %i \n", i);
        i++;
    }
    /*
    RETO
    Escribir el simbolo # en distintas lineas 5 veces
    }*/
    int CINCO = 5;
    int indice = 1;
    while(indice <= CINCO)
    {
        printf("#\n");
        indice++;
    }

    printf("\n\nIterador for \n");

    int upperLim, bottomLim;

    printf("Imprimir en orden descendiente \n");
    printf("Limite superior\n");
    scanf("%i", &upperLim);
    printf("Limite inferior\n");
    scanf("%i", &bottomLim);

    for(int i = upperLim; i>=bottomLim; i-- )
    {
        printf("Numero: %i \n", i);
    }
    /*
    RETO
    Imprimir la secuencia de Fibonacci hasta la novena vuelta
    */

    int fibo = 0;
    int auxA = 1;

    for(int i = 0; i<=9; i++)
    {
        printf("%i, ", fibo);
        fibo = auxA+fibo;
        auxA = fibo - auxA;


    }

    printf("\n\nIterador Do While \n");

    char answer = 'q';
    char value;

    do
    {
        printf("Ingresa una letra \n");
        scanf(" %c", &value);
    }while(value != answer);

    printf("Coinciden las letras %c == %c \n", value, answer);

    /*
    RETO
    Imprimir los primeros 100 numeros naturales con Do While
    */

    int naturalNumber = 0;
    do
    {
        naturalNumber++;
        printf("%i \n", naturalNumber);

    }while(naturalNumber < 100);

    return 0;
}
