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

- El siguiente programa lee un número entero positivo e imprime la suma de todos los factoriales desde 0 hasta el número ingresado
- Salvedad: El programa admite números enteros positivos, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

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
    int numero = 0, sumaTotal = 0; //Se declara la variable numero de tipo entero que almacena el numero ingresado por el usuario y la variable sumaTotal de tipo entero para almacenar la suma de los factoriales

    printf( "El siguiente programa lee un número entero, no negativo y muestra la suma de los\nfactoriales de todos los números desde 0 hasta el numero ingresado.\nIngrese por favor el numero: " );
    scanf( "%i", &numero ); //Se le asigna a la variable numero el valor ingresado por el usuario

    numero = ValidarNumero( numero ); //Se le asigna a la variable numero el valor retornado por la función ValidarNumero

    for( int n = 0; n < numero; n++ ) //Se inicia un ciclo for que se ejecutará mientras la variable n que funciona como contador sea menor al numero ingresado por el usuario
    {
        printf( "%i + ", Factorial( n ) );
        sumaTotal += Factorial( n );
    }

    printf( "%i = %i", Factorial( numero ), ( sumaTotal + Factorial( numero ) ) ); //Se imprime el ultimo factorial y la suma total de los factoriales

    return 0;
}//Fin main