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
         Z
        ZZZ
       ZZZZZ
      ZZZZZZZ
       ZZZZZ
        ZZZ
         Z
- Salvedad: El programa  no admite ingreso de datos
*/

#include <stdio.h>

//Se crea la función ImprimirLetras con un parámetro de tipo entero (cantidadDeLetras) que imprime la cantidad de letras que se le indique
int ImprimirLetras( int cantidadDeLetras )
{
    for( ; cantidadDeLetras > 0; cantidadDeLetras-- ) //Se inicia un ciclo for que se ejecutará mientras la variable cantidadDeLetras que funciona como contador sea mayor o igual a 1
        printf( "Z" );

    return 0;
} //Fin ImprimirLetras

//Se crea la función ImprimirEspacios con un parámetro de tipo entero (cantidadDeEspacios) que imprime la cantidad de espacios que se le indique
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
    int fila = 1, cantidadDeEspacios = 9, cantidadDeLetras = 1; //Se declara las variables de tipo entero fila que funciona como contador de las filas que se van a imprimir, la variable cantidadDeEspacios que almacena la cantidad de espacios que se van a imprimir y la variable cantidadDeLetras que almacena la cantidad de letras Z que se van a imprimir

    for( ; fila <= 4 ; fila++ ) //Se inicia un ciclo for que se ejecutará mientras la variable fila sea menor o igual a 4
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        cantidadDeEspacios--;
        cantidadDeLetras += 2;
    }
    
    for( cantidadDeEspacios = 7, cantidadDeLetras = 5; fila <= 7; fila++ ) //Se inicia un ciclo for que se ejecutará mientras la variable fila sea mayor a 4 y menor o igual a 7
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
    }

    return 0;
}//Fin main