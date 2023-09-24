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

- El siguiente programa imprime las tablas de multiplicar del 1 al 10.
- Salvedad: El programa  no admite ingreso de datos
*/

#include <stdio.h>

int main()
{
    printf( "Este programa imprime las tablas de multiplicar del 1 al 10." );

    for( int i = 1; i <= 10; i++ ) //Se inicia un ciclo for que se ejecutará mientras la variable i que almacena el numero del cual se está haciendo la tabla sea menor o igual a 10 
    {
        printf( "\nTabla del %i:\n", i );

        for( int j = 1; j <= 10; j++ ) //Se inicia un ciclo for que se ejecutará mientras la variable j que almacena el numero por el cual se está multiplicando sea menor o igual a 10
        {
            printf( "%i x %i = %i\n", i, j, i * j ); 
        }
    }

    return 0;
}//fin main