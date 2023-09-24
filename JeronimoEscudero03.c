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

- El siguiente programa presenta la serie de Lucas L(n) = L(n-1) + L(n-2), donde L(0) = 2 y L(1) = 1. hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main(){
    
    int cantidadDeTerminos = 0, primerNumero = 2, segundoNumero = 1, auxiliar = 0; //Se declaran las variables de tipo entero cantidadDeTerminos para almacenar la cantidad de terminos que el usuario desea ver, primerNumero y segundoNumero para almacenar el primer y segundo termino de la serie respectivamente (2 y 1), y auxiliar para almacenar la formula del i-esimo de la serie
  
    printf( "El siguiente programa presenta la serie de Lucas: L(n) = L(n-1) + L(n-2),\ndonde L(0) = 2 y L(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Lucas son: ", cantidadDeTerminos );
    
    for ( int i = 0; i < cantidadDeTerminos; i++ ) //Se inicia un ciclo for que se ejecutará mientras la variable i que funciona como contador sea menor a la cantidad de terminos que el usuario desea ver
    {
        printf( "%i, ", primerNumero );
        auxiliar = primerNumero + segundoNumero;
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
    }//fin del for

 return 0;
}//fin main