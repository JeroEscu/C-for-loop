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

- El siguiente programa presenta la serie Triangular hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main()
{
    int cantidadDeTerminos = 0, primerNumero = 1, segundoNumero = 3, auxiliar = 0; //Se declaran las variables de tipo entero cantidadDeTerminos para almacenar la cantidad de terminos que el usuario desea ver, primerNumero y segundoNumero para almacenar el primer y segundo termino de la serie respectivamente (1 y 3) y auxiliar para almacenar la formula del i-esimo de la serie

    printf( "Este programa imprime la serie de Triangular: T(n) = T(n-1) + (n-1)T(n-2),\ndonde T(0) = 1." );
    printf( "\nIngrese la cantidad de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos ); 
    printf( "Los primeros %i términos de la serie Triangular son: ", cantidadDeTerminos );

    for( int i = 0; i < cantidadDeTerminos; i++ ) //Se inicia un ciclo for que se ejecutará mientras la variable i que funciona como contador sea menor a cantidadDeTerminos
    {
        printf( "%i, ", primerNumero );
        auxiliar = ( segundoNumero - primerNumero ) + ( segundoNumero + 1 );
        primerNumero= segundoNumero;
        segundoNumero= auxiliar;
    }

    return 0; 
}//fin main