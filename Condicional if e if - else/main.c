#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if\n");

    float valA, valB, valC;

    valA = valB = 100;

    printf("Primera condicion \n");
    if(valA == valB)
    printf("Ambos valores son iguales \n");

    printf("Segunda condicion \n");

    if(valA == valB)
    {
        printf("Segunda condicion \n");
        valC = valA + valB;
        printf("Ademas la suma de ambos numeros es %f \n", valC);
    }

    printf("Condicion if, else, else if \n");
    float valorA, valorB, valorC;
    valorA = 50;
    valorB = 100;
    valorC = 150;

    if(valorA == valorB)
        printf("No se va a cumplir esta condicion \n");
    else if(valorB == valorC)
        printf("Tampoco se va a cumplir esto \n");
    else
    {
        printf("Ninguna se cumplio \n");
        printf("Hasta aca llego \n");
    }

    /*
    RETOO
        Programa que adivina el numero, crear una variable con valor y, y otra variable que el usuario ponga el numero
        el programa lo compara y si coincide debe mostrar ADIVINASTE y si no imprimir perdiste.
    */
    printf("RETO \n");

    int CINCO = 5;
    int userNum;

    printf("Escriba un numero \n");
    scanf("%i", &userNum);
    if(userNum == CINCO)
    {
        printf("ADIVINASTE \n");
    }else
    {
        printf("Perdiste \n");
    }

    return 0;
}
