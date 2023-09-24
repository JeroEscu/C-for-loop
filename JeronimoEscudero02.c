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

- El siguiente programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100
- Salvedad: Este programa no admite ingreso de datos
*/

#include <stdio.h>

int main()
{
    int primerNumero = 0, segundoNumero = 1, auxiliar = 0, sumaFibonacci = 0; //Se declaran las variables de tipo entero primerNumero y segundoNumero para almacenar el primer y segundo termino de la serie respectivamente (0 y 1), auxiliar para almacenar la formula del i-esimo de la serie y sumaFibonacci para almacenar la suma de los elementos de la serie

    printf( "Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\nLos números a sumar son:\n" );

    for ( int i = 0; i < 11; i++ ) //Se inicia un ciclo for que se ejecutará mientras la variable i que funciona como contador sea menor a 11
    {
        printf( "%i, ", primerNumero );
        sumaFibonacci += primerNumero;
        auxiliar = primerNumero + segundoNumero;
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
    }

    printf( "%i y su suma es %i", primerNumero, sumaFibonacci + primerNumero );

    return 0;
}//fin main