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

- El siguiente programa lee un número entero positivo e imprime su factorial
- Salvedad: El programa admite números enteros positivos, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>
#include <math.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
long long int Factorial( int numero )
{
    long long int resultado = 1; //se declara la variable resultado de tipo long long int con un valor de 1, siendo este el factorial de 0

    for( int n = 1; n <= numero; n++ ){
        resultado *= n;
    }
    
    return resultado;
}//Fin Factorial

//Se crea la función ValidarNumero con un parámetro de tipo entero, numero
int ValidarNumero( int numero )
{   
    for( ; numero < 0 ; ) //Se ejecuta el ciclo for que verifica si el numero es entero positivo
    {
        printf( "El número no puede ser cero.\nIngrese un número: " );
        scanf( "%i", &numero ); //Se le asigna a la variable numero el valor ingresado por el usuario
    }

    return numero;
}//Fin ValidarNumero

int main()
{
    int numero = 0; //Se declara la variable numero de tipo entero que almacena el numero ingresado por el usuario

    printf( "El siguiente programa lee un número entero positivo e imprime su factorial, siendo:\nN! = 1 x 2 x 3 x 4 x ... N\nN! = 1 si N = 0\nIngrese por favor el numero: " );
    scanf( "%i", &numero );//Se le asigna a la variable numero el valor ingresado por el usuario
    numero = ValidarNumero( numero ); //Se le asigna a la variable numero el valor retornado por la función ValidarNumero
  
    printf( "El factorial de %i es: %lli", numero, Factorial( numero ) );
  
    return 0;
}//Fin main