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

- El siguiente programa presenta la serie de Motzkin (M(n) = (3(n-1) * M(n-2) + (2n + 1) * M(n-1) ) / n + 2, donde M(0) =1 y M(1) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main()
{
    int primerNumero = 1, segundoNumero = 1, auxiliar = 0, cantidadDeTerminos = 0; //Se declaran las variables de tipo entero primerNumero y segundoNumero para almacenar el primer y segundo termino de la serie respectivamente (1 y 1), auxiliar para almacenar la formula del i-esimo de la serie y cantidadDeTerminos para almacenar la cantidad de terminos que el usuario desea ver

    printf( "Este programa presenta la serie de Motzkin: M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k),\ndonde M(0) =1 y M(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    printf( "Los primeros %i de la serie de Motzkin son: ", cantidadDeTerminos );

    //La condición de parada es + 1 porque el contador inicia en 2 y se debe tener en cuenta esos dos primeros números de la serie que no fueron iterados
    for( int i = 2; i <= cantidadDeTerminos + 1; i++ ) //Se inicia un ciclo for que se ejecutará mientras la variable i que funciona como contador cumpla la condicion
    {
        printf( "%i, ", primerNumero );
        auxiliar = ( ( ( ( 2 * i + 1 ) * segundoNumero ) + ( ( 3 * i - 3 ) * primerNumero ) ) / ( i + 2 ) );
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
    }

    return 0;
}//fin main