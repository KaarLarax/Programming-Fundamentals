///Librerias
#include <iostream>
#include <locale>///Sistema
#include <stdlib.h>
#include <stdio.h>
#include <string.h>///Cadenas

///-->prototipos de funciones
void portada(void);///funcion vacia
int mide_nombre(char name[35]);///Funcion que recibe y devuelve
void inicio(void);///funcion paraa cambiar color, idioma
void hacer_tiempo(void);///hace tiempo para una accion

using namespace std;

int main()
{
    char name[50];///arreglo unidimensional
    int longitud;

    ///Invocacion de la funcion
    inicio();///Configuracion del color, idioma y limpieza de la consola

    cout << "\t\t" << "********USO DE LAS FUNCIONES**********" << endl;
    cout << "\t\t" << "pulse <enter> para continuar...       " << endl;
    getchar();///lee el teclado

    portada();///llamado de la funcion portada

    cout << "\t\t" << "pulse <enter> para continuar...       " << endl;
    getchar();///lee el teclado
    system("cls");
    system("color 0a");
    cout << "Ingrese su nombre completo: ";
    cin.getline(name,50);///funciones para recibir una entrada de toda la linea
    longitud = mide_nombre(name);

    cout << "Su nombre tiene: " << longitud << "caracteres" << endl;
    return 0;
}

///Cuerpo de funciones

void portada(void)
{
system("color 1f");
cout << "\t\t" << " :::    :::     :::     :::::::::: :::    ::: " << endl;
cout << "\t\t" << " :+:    :+:   :+: :+:   :+:        :+:    :+: " << endl;
cout << "\t\t" << " +:+    +:+  +:+   +:+  +:+        +:+    +:+ " << endl;
cout << "\t\t" << " +#+    +:+ +#++:++#++: +#++:++#   +#++:++#++ " << endl;
cout << "\t\t" << " +#+    +#+ +#+     +#+ +#+        +#+    +#+ " << endl;
cout << "\t\t" << " #+#    #+# #+#     #+# #+#        #+#    #+# " << endl;
cout << "\t\t" << "  ########  ###     ### ########## ###    ### " << endl << endl;

cout << "\t\t" << "____________________________________________" << endl;
cout << "\t\t" << "|INSTITUTO DE CIENCIAS BASICAS E INGENIERIA|" << endl;
cout << "\t\t" << "|LICENCIATURA EN CIENCIAS COMPUTACIONALES  |" << endl;
cout << "\t\t" << "|FUNDAMENTOS DE PROGRAMACION               |" << endl;
cout << "\t\t" << "|CARLOS ALBERTO LARA HERNANDEZ             |" << endl;
cout << "\t\t" << "|SEMESTRE: 1  GRUPO: 1                     |" << endl;
cout << "\t\t" << "|No. CUENTA: 476759                        |" << endl;
cout << "\t\t" << "|------------------------------------------|" << endl;
}

void inicio(void)
{
    system("cls");
    system("color 0a");
    setlocale(LC_CTYPE, "spanish");
}

int mide_nombre(char name[35])
{
    int q;///Variable local
    q = strlen(name);///atring lenght
    return q;
}
