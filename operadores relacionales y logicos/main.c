#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores Relacionales \n");
    float valA, valB;
    valA = 5;
    valB = 10;

    if(valA < valB)
        printf("Pregunta1 : cierto \n");
    else
        printf("Pregunta 1: falso \n");
    if(valA <= valB)
        printf("Pregunta 2 : cierto \n");
    else
        printf("Pregunta 2: falso \n");
    if(valA > valB)
        printf("Pregunta 3 : cierto \n");
    else
        printf("Pregunta 3: falso \n");
    if(valA >= valB)
        printf("Pregunta 4 : cierto \n");
    else
        printf("Pregunta 4: falso \n");
    if(valA == valB)
        printf("Pregunta 5 : cierto \n");
    else
        printf("Pregunta 5: falso \n");
    if(valA != valB)
        printf("Pregunta 6 : cierto \n");
    else
        printf("Pregunta 6: falso \n \n");

    printf("OPERADORES LOGICOS \n \n");
    float valorA, valorB, valorC;
    valorA = 5;
    valorB = valorC = 10;

    if(valorA < valorB && (valorB == valorC))
        printf("Se cumplieron las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones \n");
    if(valorA > valorB || (valorB != valorC))
        printf("Se cumplieron por lo menos una las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones \n");

    /*
    RETO!
    El usuario ingresa dos numeros distintos, y si el primer numero es menor lo imprime, sino imprime el segundo.
    */
    printf("RETOOOOOOO! \n\n");
    int primero, segundo;
    printf("Ingresa el primer numero \n");
    scanf("%i", &primero);
    printf("Ingresa el segundo numero \n");
    scanf("%i", &segundo);
    if(primero < segundo)
        printf("El menor es: %i ", primero);
    else
        printf("El menor es: %i ", segundo);

    return 0;
}
