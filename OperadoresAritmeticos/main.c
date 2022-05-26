#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 7 + 3;
    rRes = 7.1 - 3.1;
    rDiv = 7.1 / 3.1;
    rMult = 7*3;
    rMod = 7%3;

    printf("Suma: %i \n", rSum);
    printf("Resta: %f \n", rRes);
    printf("Division %f \n", rDiv);
    printf("Multiplicación %f \n", rMult);
    printf("Modulo: %i \n", rMod);

    //RETO 1 Calcular el area y el volumen de un Cilindo
    float PI = 3.1;
    float radio;
    float altura;
    float area;
    float volumen;

    printf("Por favor ingrese el radio del Cilindro \n");
    scanf("%f", &radio);
    printf("Por favor ingrese la altura del Cilindro \n");
    scanf("%f", &altura);
    area = radio*PI*PI;
    volumen = area*altura;

    printf("El area de la base es: %f \nEl volumen es: %f \n", area, volumen);

    //RETO 2 Convertir °F a °C.
    float gradosC;
    float gradosF;
    printf("Por favor ingrese la temperatura en °F \n");
    scanf("%f", &gradosF);
    gradosC = ((gradosF-32)/9)*5;
    printf("El resultado en °C es: %f", gradosC);

    return 0;
}
