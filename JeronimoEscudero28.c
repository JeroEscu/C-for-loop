/*
- Fecha de publicación: 2023-09-24
- Hora: 1:00 p.m

- Versión de su código: 1.0
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

-  El siguiente programa imprime en pantalla el siguiente diseño:
                                       A
                                      AA
                                     AAA
                                    AAAA
                                   AAAAA
                                  AAAAAA
                                   AAAAA
                                    AAAA
                                     AAA
                                      AA
                                       A
- Salvedad: El programa  no admite ingreso de datos
*/

#include <stdio.h>

//Se crea la función ImprimirLetras con un parámetro de tipo entero (cantidadDeLetras) que imprime la cantidad de letras que se le indique
int ImprimirLetras( int cantidadDeLetras )
{
    for( ; cantidadDeLetras > 0; cantidadDeLetras-- ) //Se inicia un ciclo for que se ejecutará mientras la variable cantidadDeLetras que funciona como contador sea mayor o igual a 1
        printf( "A" );

    return 0;
} //Fin ImprimirLetras

//Se crea la función ImprimirEspacios con un parámetro de tipo entero (cantidadDeEspacios) que imprime la cantidad de cantidadDeEspacios que se le indique
int ImprimirEspacios( int cantidadDeEspacios )
{
    for( ; cantidadDeEspacios > 0; cantidadDeEspacios-- ) //Se inicia un ciclo for que se ejecutará mientras la variable cantidadDeEspacios sea mayor o igual a 1
        printf( " " );

    return 0;
} //Fin ImprimirEspacios

//Se crea la función SaltoDeLinea que imprime un salto de linea
int SaltoDeLinea()
{
    printf( "\n" );
    return 0;
}//Fin SaltoDeLinea

int main()
{
    int fila = 1; //Se declara la variable fila de tipo entero que funciona como contador de las filas que se van a imprimir

    //Para las primeras 6 filas
    for( int cantidadDeEspacios = 39; fila <= 6; fila++, cantidadDeEspacios-- ) //Se inicia un ciclo for que se ejecutará mientras la variable fila que funciona como contador sea menor o igual a 6
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( fila );
        SaltoDeLinea();
    }

    //Para las ultimas 5 filas
    for ( int cantidadDeEspacios = 35, cantidadDeLetras = 5; fila <= 11; fila++, cantidadDeEspacios++, cantidadDeLetras-- ) //Se inicia un ciclo for que se ejecutará mientras la variable fila que funciona como contador sea menor o igual a 11 (numero total de filas)
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
    }
    return 0;
}//Fin main