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
        Z Z
       Z   Z
      Z     Z
     Z       Z
    Z         Z
   Z           Z
  Z             Z
 Z               Z
Z                 Z
- Salvedad: El programa no admite el ingreso de datos
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

int main()
{
    int espaciosIniciales = 9, espaciosMedios = -1; //Se declaran las variables espaciosIniciales y espaciosMedios de tipo entero que almacenan la cantidad de espacios que se van a imprimir

    for( int fila = 1; fila <= 10; fila++ ) //Se inicia un ciclo for que se ejecutará mientras la variable fila que funciona como contador sea menor o igual a 10 (numero de filas)
    {
        ImprimirEspacios( espaciosIniciales );
        ImprimirLetras( 1 );
        ImprimirEspacios( espaciosMedios );

        //se evalua si fila es diferente de 1 para imprimir la segunda Z al final de cada linea
        if ( fila != 1 )
            ImprimirLetras( 1 );
            
        printf( "\n" );
        espaciosIniciales--;
        espaciosMedios += 2;
    }
    return 0;
}//Fin main