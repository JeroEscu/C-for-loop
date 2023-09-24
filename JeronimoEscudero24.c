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
                           A     A
                           AA   AA
                           AAA AAA
                           AAAAAAA
                           AAA AAA
                           AA   AA
                           A     A
- Salvedad: El programa no admite ingreso de datos
*/

#include <stdio.h>

//Se crea la función ImprimirLetras con un parámetro de tipo entero (cantidadDeLetras) que imprime la cantidad de letras que se le indique
int ImprimirLetras( int cantidadDeLetras )
{
    for( ; cantidadDeLetras > 0; cantidadDeLetras-- ) //Se inicia un ciclo for que se ejecutará mientras la variable cantidadDeLetras que funciona como contador sea mayor o igual a 1
        printf( "A" );

    return 0;
} //Fin ImprimirLetras

//Se crea la función ImprimirEspacios con un parámetro de tipo entero (cantidadDeEspacios) que imprime la cantidad de espacios que se le indique
int ImprimirEspacios( int cantidadDeEspacios )
{
    for( ;  cantidadDeEspacios > 0; cantidadDeEspacios-- ) //Se inicia un ciclo for que se ejecutará mientras la variable cantidadDeEspacios sea mayor o igual a 1
        printf( " " );

    return 0;
} //Fin ImprimirEspacios

//Se crea la función SaltoDeLinea que imprime un salto de linea
int SaltoDeLinea()
{
    printf( "\n" );
} //Fin SaltoDeLinea

int  main()
{
    int fila = 1, espaciosMedios = 5, cantidadDeLetras = 3; //Se declaran las variables fila, espaciosMedios y cantidadDeLetras de tipo entero que almacenan la cantidad de filas, la cantidad de espacios medios y la cantidad de letras A que se desean imprimir respectivamente
    for( ; fila <= 3; fila++, espaciosMedios-=2 ) //Se inicia un ciclo for que se ejecutará mientras la variable fila que funciona como contador sea menor o igual a 3 (primeras filas del diseño)
    {
        ImprimirEspacios( 27 );
        ImprimirLetras( fila );
        ImprimirEspacios( espaciosMedios );
        ImprimirLetras( fila );
        SaltoDeLinea();
    }

    //fila = 4
    ImprimirEspacios( 27 );
    ImprimirLetras( 7 );
    SaltoDeLinea();
    fila++;

    //Para las filas 5, 6 y 7
    espaciosMedios = 1;

    for( ; fila <= 7; fila++, cantidadDeLetras--, espaciosMedios+=2 ) //Se inicia un ciclo for que se ejecutará mientras la variable fila que funciona como contador sea menor o igual a 7 (numero final de filas)
    {
        ImprimirEspacios( 27 );
        ImprimirLetras( cantidadDeLetras );
        ImprimirEspacios( espaciosMedios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
    }

    return 0;
}//Fin main