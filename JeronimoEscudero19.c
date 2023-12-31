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

- El siguiente programa imprime en pantalla en el efecto de que unas A impresas se mueven.
- Salvedad: El programa no admite el ingreso de datos
*/

#include <stdio.h>
#include <windows.h> //Se incluye la librería windows.h para poder utilizar la función Sleep y poder pausar el programa

//Se crea la función ImprimirEspacios con un parámetro de tipo entero (cantidadDeEspacios) que imprime la cantidad de espacios que se le indique
int ImprimirEspacios( int cantidadDeEspacios )
{
    for( ; cantidadDeEspacios > 0; cantidadDeEspacios-- ) //Se inicia un ciclo for que se ejecutará mientras la variable cantidadDeEspacios sea mayor o igual a 1
        printf( " " );

    return 0;
} //Fin ImprimirEspacios

int ImprimirLetras()
{
    printf("A");
    return 0;   
}//Fin ImprimirLetras

int main()
{
    int espacioInicial = 0, espacioMedio = 78; //Se declaran las variables espacioInicial y espacioMedio de tipo entero que almacenan la cantidad de espacios que se desean imprimir al inicio y en el medio de la letra A respectivamente

    for( ; espacioMedio >= 0; espacioInicial++, espacioMedio -= 2 ) //Se inicia el ciclo for que se ejecutará mientras la variable espacioMedio sea mayor o igual a 0
    {
        ImprimirEspacios(espacioInicial);
        ImprimirLetras();
        ImprimirEspacios(espacioMedio);
        ImprimirLetras();
        //Se utiliza la función Sleep y la función system para que el programa se detenga por 200 milisegundos y se limpie la pantalla respectivamente y así crear el efecto de movimiento
        Sleep(200);
        if( espacioMedio != 0 ) //Se crea una condición para que no se limpie la pantalla en la última fila del efecto
            system( "cls" );   
    }

    printf( "\n" );
    system( "pause" ); //Se utiliza la función system para que el programa se detenga hasta que el usuario presione una tecla

    return 0;
} //Fin main
