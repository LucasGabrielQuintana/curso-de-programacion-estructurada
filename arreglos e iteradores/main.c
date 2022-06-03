#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e iteradores\n");

    int integerArray[11];

    for(int i = 0; i < 11; i++)
    {
        integerArray[i] = i*i;
        printf("Valor (%i): %i\n", i, integerArray[i] );
    }

    /*
        RETO
        Encontrar en un arreglo el numero mayor
    */
    int si, aux;
    printf("\n\nRETOO!!\n\nDe que tamaño lo quiere al arreglo?\n");
    scanf("%i", &si);
    int arregloDeNumeros[si];
    printf("Ahora vamos a agregar numeros uno por uno\n");
    for(int i = 0; i<si; i++)
    {
        printf("Agrega el valor en la posicion %i \n", i);
        scanf("%i", &arregloDeNumeros[i]);
    }
    printf("\n\nAhora vamos a buscar el mayor\n");
    for(int i = 0; i<si;i++)
    {
        if(i==0)
        {
            aux = arregloDeNumeros[i];
        }else if(aux <= arregloDeNumeros[i])
        {
            aux = arregloDeNumeros[i];
        }
    }
    printf("El mayor es: %i", aux);

    printf("\n\n Arreglos bidimensionales e iteradores\n");

    int integerArrayB[4][5];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            integerArrayB[i][j] = ((i+j)*100+j);
            printf("(%i, %i) : %i \n ", i, j, integerArrayB[i][j]);
        }
    }
    /*
        RETO!
        Crear un arreglo de 5x6. Los primeros 5 elementos son notas entre 6 y 10, y el sexto elemento debe ser 0.
        Calcular el promedio de los primeros 5 elementos y guardarlo en en la posicion 6.
        imprimir el promedio de cada fila.
    */

    printf("\n\nRETO!!\n");
    float notypro[5][6] = {{6,10,9,6,10,0},{6,6,7,6,9,0},{6,7,6,9,6,0},{6,10,6,6,6,0},{6,6,6,7,6,0}};
    float acu;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(j == 0){
                acu = notypro[i][j];
            }else if(j<=4){
                acu += notypro[i][j];
            }else{
                notypro[i][j]=acu/5;
            }
        }
    }
    printf("Los promedios son: \n\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(j == 5)
            {
                printf("Linea %i: %f \n\n", i, notypro[i][j]);
            }
        }

    }

    printf("Cadena de Caracteres.\n\n");

    char nameC[50];
    int size;
    printf("Leer nombre con gets: ");
    //gets: permite leer una cadena incluyendo espacios y termina cuando lee el fin de linea: \n
    gets(nameC);

    printf("El nombre es: ");
    //puts: Imprime la cadena hasta que detecta el fin de linea \0 o \n.
    puts(nameC);

    size = strlen(nameC);
    printf("\nEl tamanio de la cadena es: %d \n\n", size);
    return 0;
}
