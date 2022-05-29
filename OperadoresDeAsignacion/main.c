#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de asignacion \n");
    int value;
    value = 1;
    printf("El valor de nuestra variable es %i \n", value);
    value += 10;
    printf("El valor de nuestra variable es %i \n", value);
    value -= 2;
    printf("El valor de nuestra variable es %i \n", value);
    value *=5;
    printf("El valor de nuestra variable es %i \n", value);
    value /=2;
    printf("El valor de nuestra variable es %i \n", value);
    value %=2;
    printf("El valor de nuestra variable es %i \n", value);

    printf("Operadores de incremento decremento \n");

    int valueB, res;
    valueB = 25;
    res = valueB++;
    printf("Resultado %i \n", res);
    printf("value %i \n", valueB);
    res = ++valueB;
    printf("Resultado %i \n", res);
    printf("value %i \n", valueB);
    printf("value %i \n", valueB);
    res = valueB--;
    printf("Resultado %i \n", res);
    printf("value %i \n", valueB);
    res = --valueB;
    printf("Resultado %i \n", res);
    printf("value %i \n", valueB);

    //RETO1
    //Crear una variable X con un valor de 10, sumarle su doble y mostrarlo.
    printf("RETO 1\n");
    int x = 10;
    printf("El valor inicial es: %i \n", x);
    x += 2*x;
    printf("El valor final es: %i \n", x);

    //RETO 2
    //Ingresar un numero, usar operadores de asignacion para sacar el modulo con 5, imprimir el resultado mas uno.
    printf("RETO 2\n");
    int modulo;
    printf("Ingrese un numero \n");
    scanf("%i", &modulo);
    modulo %=5;
    modulo++;
    printf("El valor final es: %i \n", modulo) ;
    return 0;
}
