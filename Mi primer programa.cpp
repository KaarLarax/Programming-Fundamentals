/// #1:ARCHIVOS CABECERA/LIBRERIAS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale> ///idioma español
///--------------------------------------------
/// #2:definiciones
#define MAX 100
///--------------------------------------------
/// #3:protipos de funcion
///--------------------------------------------
/// #4:variables globales
///--------------------------------------------
using namespace std; ///directiva para e/s
///--------------------------------------------
int main() ///funcion principal
{ ///inicio
    ///declaracion de variables, constantes, arreglos, etc.

    setlocale(LC_CTYPE,"spanish"); ///español
    system("cls"); ///limpia la consola
    system("color 0A"); ///primero para fondo, segundo para caracteres
    cout << "Hello world!" << endl;
    ///cout: console output
    ///endl: end line ---> fin de linea
    cout << "mi primer programa en code blocks..."<<endl;
    cout << "diseñado por: Carlos Alberto Lara Hernandez"<<endl;

    return 0; ///valor que devuelve la funcion
} /// fin
///-------------------------------------------
