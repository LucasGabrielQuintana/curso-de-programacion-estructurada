#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales\n");

    int integerList[3];

    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[] = {1.23, 45.6, 21.8, 56.7, 5.0};

    char charlist[4];
    charlist[0] = 'q';
    charlist[1] = 'w';
    charlist[2] = '3';
    charlist[3] = 'r';

    printf("\nMi primer entero es: \t\t %i", integerList[2]);
    printf("\nUn flotante es: \t\t %f", floatList[4]);
    printf("\nLista de caracteres: \t\t %c, %c, %c, %c. \n.", charlist[0],charlist[1],charlist[2],charlist[3] );

    /*
    RETO
    Crear un arreglo de 5 numeros enteros multiplicarlos todos y mostrar el resultado
    */
    printf("\n\nRETOO!!");
    int numeros[] = {1,2,3,4,5};
    int acu = 1;
    for(int i = 0; i < 5;i++)
    {

        acu = acu*numeros[i];
    }
    printf("Total: %i", acu);

    printf("\n\nArreglos Bidimensionales \n");

    int bidimensionalArray[4][4];
    /*
        AGREGANDO EN FORMA MANUAL LOS DATOS
    */
    bidimensionalArray[0][0] = 11;
    bidimensionalArray[0][1] = 12;
    bidimensionalArray[0][2] = 13;
    bidimensionalArray[0][3] = 14;

    bidimensionalArray[1][0] = 29;
    bidimensionalArray[1][1] = 28;
    bidimensionalArray[1][2] = 27;
    bidimensionalArray[1][3] = 26;

    bidimensionalArray[2][0] = 3;
    bidimensionalArray[2][1] = 32;
    bidimensionalArray[2][2] = 33;
    bidimensionalArray[2][3] = 34;

    bidimensionalArray[3][0] = 49;
    bidimensionalArray[3][1] = 48;
    bidimensionalArray[3][2] = 47;
    bidimensionalArray[3][3] = 46;

    printf("valor en (0,0) es: %i\n", bidimensionalArray[0][0]);
    printf("valor en (0,1) es: %i\n", bidimensionalArray[0][1]);
    printf("valor en (0,2) es: %i\n", bidimensionalArray[0][2]);
    printf("valor en (0,3) es: %i\n", bidimensionalArray[0][3]);

    /*
        RETO
        Crear un arreglo de 3x4 donde los elementos de la primera fila suman 4, los de la segunda suman 10 y los de la tercera suman 26.
    */

    printf("\n\nRETO!!!!\n");
    int arrayDelReto[3][4] = {{1,1,1,1},{5,1,2,2},{10,15,0,1}};
    int acuA, acuB, acuC;
    acuA = acuB = acuC = 0;
    for(int i = 0; i<3;i++)
    {
        for(int j = 0; j< 4; j++)
        {
            if(i==0)
            {
                acuA = acuA + arrayDelReto[i][j];
            }else if(i == 1)
            {
                acuB += arrayDelReto[i][j];
            }else
            {
                acuC += arrayDelReto[i][j];
            }

        }
    }

    printf("Las sumas son %i, %i, %i \n", acuA, acuB, acuC);

    return 0;
}
