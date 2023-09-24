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
PPPPPPPPPPPPP
 PPPPPPPPPPP
  PPPPPPPPP
   PPPPPPP
    PPPPP
     PPP
      P
- Salvedad: El programa no admite el ingreso de datos
*/

#include <stdio.h>

//Se crea la función ImprimirLetras con un parámetro de tipo entero (cantidadDeLetras) que imprime la cantidad de letras que se le indique
int ImprimirLetras( int cantidadDeLetras )
{
    for( ; cantidadDeLetras > 0; cantidadDeLetras-- ) //Se inicia un ciclo for que se ejecutará mientras la variable cantidadDeLetras que funciona como contador sea mayor o igual a 1
        printf( "P" );

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
    int cantidadDeLetras = 13, cantidadDeEspacios = 0; //Se declaran las variables de tipo entero cantidadDeLetras y cantidadDeEspacios para almacenar la cantidad de letras y espacios que se imprimirán en cada fila respectivamente

    for( int fila = 1; fila <= 7; fila++ ) //Se inicia un ciclo for que se ejecutará mientras la variable fila que funciona como contador sea menor o igual a 7 (numero de filas)
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        printf( "\n" );
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
    }

    return 0;
}//fin main