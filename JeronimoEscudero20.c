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
                                                                         AAAAAAA
                                                                        AAAAAAAA
                                                                       AAAAAAAAA
                                                                      AAAAAAAAAA
                                                                     AAAAAAAAAAA
                                                                    AAAAAAAAAAAA
                                                                   AAAAAAAAAAAAA
                                                                  AAAAAAAAAAAAAA
                                                                 AAAAAAAAAAAAAAA
                                                                AAAAAAAAAAAAAAAA
                                                               AAAAAAAAAAAAAAAAA
                                                              AAAAAAAAAAAAAAAAAA
                                                             AAAAAAAAAAAAAAAAAAA
                                                            AAAAAAAAAAAAAAAAAAAA
                                                           AAAAAAAAAAAAAAAAAAAAA
                                                          AAAAAAAAAAAAAAAAAAAAAA
                                                         AAAAAAAAAAAAAAAAAAAAAAA
                                                        AAAAAAAAAAAAAAAAAAAAAAAA
                                                       AAAAAAAAAAAAAAAAAAAAAAAAA
                                                    
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

int main()
{
    for( int fila = 1; fila <= 25; fila++) //Se inicia un ciclo for que se ejecutará mientras la variable fila que funciona como contador sea menor o igual a 25 (numero de filas)
    {
        ImprimirEspacios( 80 - fila );
        ImprimirLetras( fila );
        printf( "\n" );
    }

    return 0;
}//fin main