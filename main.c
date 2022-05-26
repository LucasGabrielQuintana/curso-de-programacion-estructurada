#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 3.14;
    double doubleA = 1.2;
    char letterA = 'A';

    //imprimir valores
    printf("El valor de nuestro entero A es: %i \n", integerA);
    printf("El valor de mi flotante A es: %f \n", floatA);
    printf("El valor de mi Double A es: %f \n" , doubleA );
    printf("El valor de mi caracter A es: %c \n", letterA);

    printf("El valor de nuestro entero A es: %i,\n El valor de mi flotante A es: %f,  \nEl valor de mi Double A es: %f, \nEl valor de mi caracter A es: %c  \n", integerA, floatA,doubleA,letterA );

    int integerB;
    float floatB;
    char letterB;

    //guardar un valor en variable
    printf("Ingrese el valor del entero B: ");
    scanf("%i", &integerB);
    printf("El entero B es: %i", integerB);


    //ESTA PARTE CORRESPONDE AL RETO DE LA CLASE
    //Crear dos variables, ingresar el valor de cada una,intercambiar con ayuda de una variable auxiliar. Imprimir el valor de las variables intercambiadas.
    int intRetoA;
    int intRetoB;
    int auxiliar;

    printf("Ingrese primero el valor de A y luego el de B \n");
    scanf("%i", &intRetoA);
    scanf("%i", &intRetoB);

    printf("El valor de A es: %i \n", intRetoA);
    printf("El valor de B es: %i \n", intRetoB);

    auxiliar = intRetoA;
    intRetoA = intRetoB;
    intRetoB = auxiliar;
    printf("El valor de A es: %i \n", intRetoA);
    printf("El valor de B es: %i \n", intRetoB);

    return 0;
}
