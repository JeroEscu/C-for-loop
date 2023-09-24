/* 
- Fecha de publicación: 2023-09-24
- Hora: 1:00 p.m

- Versión de su código: 1.1
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa presenta la serie de Bell sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado, ademas se realizó un cambio en la formula mostrada en el contrato, en su lugar se utilizo la siguiente formula: B(termino de la serie) = 1/e * sumatoria desde k=0 de k^n / k! ( entre el numero final de la sumatoria sea mayor, mas aproximado estara el termino resultante)
*/

#include <stdio.h>
#include <math.h>

//Se crea la función Factorial con un parámetro de tipo flotante (numero) que calcula el factorial de un número
float Factorial( float numero )
{
    float resultado = 1; //se declara la variable resultado de tipo flotante con un valor de 1, siendo este el factorial de 0

    for( int i = 1; i <= numero; i++ ){
        resultado *= i;
    }
    
    return resultado;
}//Fin Factorial

//Se crea la función Sumatoria con 3 parámetros de tipo flotante (k, n, limite) que calcula la sumatoria de la serie de Bell
float Sumatoria( float k, float termino, float limite )
{
    float resultado = 0;//Se declara la variable resultado de tipo flotante que almacena el resultado de la sumatoria

    for( ; k <= limite; k++ )
    {
        resultado += ( pow( k, termino ) / Factorial( k ) );
    }

    //Se multiplica el resultado de la sumatoria por 1/e para obtener el termino de la serie ( e = numero euler )
    return ( resultado * ( 1 / 2.718281828459045235 ) );

}//Fin Sumatoria

int main(){

    int cantidadDeTerminos = 0; //Se declara la variable cantidadDeTerminos de tipo entero que almacena la cantidad de terminos que el usuario desea ver
    
    printf( "El siguiente programa presenta la serie de Bell: B(n) = 1/e * Σ(k=0, ∞) (k^n/k!),\ndonde B(0) = 1 y B(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie de Bell son: ", cantidadDeTerminos );

    for ( int contador = 0; contador < cantidadDeTerminos; contador++ ) //Se inicia un ciclo for que se ejecutará mientras la variable i que funciona como contador sea menor a la cantidad de terminos que el usuario desea ver
    {
        printf( "%.0lf, ", round( Sumatoria( 0, contador, 100 ) ) ); //Se usa el formato %g para que el resultado sea redondeado y no se imprima con valores decimales
    }

    return 0;
}//fin main