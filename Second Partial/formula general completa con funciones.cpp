///librerias
#include <iostream> ///e-s
#include <stdlib.h> ///sistema
#include <locale> ///idioma
#include <math.h> ///funcion matematica
#include <string.h>
#include <windows.h>
#include <conio.h>

///*****************************************************************************************

void ecuacion_general();
void Regresar_ecuacion();
void genere_tiempo();
void portada();
void password();
void Cconfig();
using namespace std;

int main() { ///inicio de main

Cconfig();
///*****************************************************************************************
password();
///*****************************************************************************************
portada();
///*****************************************************************************************
ecuacion_general();
///*****************************************************************************************
    return 0;

} /// Termina main

void password (void) {
    char pass[15]={"Donnie Darko"};
    char magicword[15];

    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 9);
    cout << "Ingrese la contraseña ";
    SetConsoleTextAttribute(hConsole, 12);
    cin.getline(magicword,13);
    if (strcmp(pass,magicword) == 0) {
        SetConsoleTextAttribute(hConsole, 9);
        cout << "Contraseña correcta" << endl;
        SetConsoleTextAttribute(hConsole, 5);
        cout << "Bienvenido" << endl << endl;
        genere_tiempo();
        system("cls");
    } else {
        SetConsoleTextAttribute(hConsole, 8);
        cout << "Contraseña incorrecta" << endl;
        exit(-1);
    }
}

void portada(void) {
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t" << " :::    :::     :::     :::::::::: :::    ::: " << endl;
cout << "\t\t" << " :+:    :+:   :+: :+:   :+:        :+:    :+: " << endl;
cout << "\t\t" << " +:+    +:+  +:+   +:+  +:+        +:+    +:+ " << endl;
cout << "\t\t" << " +#+    +:+ +#++:++#++: +#++:++#   +#++:++#++ " << endl;
cout << "\t\t" << " +#+    +#+ +#+     +#+ +#+        +#+    +#+ " << endl;
cout << "\t\t" << " #+#    #+# #+#     #+# #+#        #+#    #+# " << endl;
cout << "\t\t" << "  ########  ###     ### ########## ###    ### " << endl << endl;
SetConsoleTextAttribute(hConsole, 12);
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| INSTITUTO DE CIENCIAS BASICAS E INGENIERIA  |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| LICENCIATURA EN CIENCIAS COMPUTACIONALES    |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| CARLOS ALBERTO LARA HERNANDEZ               |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| SEMESTRE: 1          GRUPO: 1               |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| NO.DE CUENTA: 476759                        |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "Presione cualquier tecla para continuar...    "; getch();///lee el teclado
genere_tiempo();

}

void genere_tiempo(void)/// hacer un delay propio
{
    for(int i=0;i<30111;i++)
        {///for externo
        for(int j=0;j<30000;j++)
            {}
        }
}

void Cconfig (void)
{
    setlocale(LC_CTYPE,"Spanish"); /// Cambia el idioma en español
    system("cls");/// Limpia la consola
    system("color 0D");/// Cambia el color a purpura
}

void Regresar_ecuacion (void) {
    char regresar;

    cout << "\t\t"; system("pause");
    system("cls");
    cout << "\t\t" << "¿Usted desea ingresar otra ecuacion? " << endl;
    cout << "\t\t" << "Presione la letra S" << endl;
    cout << "\t\t"; cin >> regresar;
    if (regresar == 'S' || regresar == 's') {
        cout << "\t\t" << "regresando a ingresar coeficientes... " << endl;
        Sleep(500);
        ecuacion_general();
    } else if ((cin.fail()) || (regresar == 'N') || (regresar == 'n')) {
        cout << "\t\t" << "El programa se cerrara" << endl;
        exit(-1);
    }
}

void ecuacion_general (void) {
    double a, b, c, d, d2, X1, X2, b1, d3;

    system("cls");
///titulos del programa
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 13);
    cout << "\t\t" << "+------------------------------------+" << endl;
    cout << "\t\t" << "|    ECUACIONES DE SEGUNDO GRADO     |" << endl;
    cout << "\t\t" << "+------------------------------------+" << endl;
    cout << "\t\t" << "| POR MEDIO DE LA FORMULA GENERAL    |" << endl;
    cout << "\t\t" << "+------------------------------------+" << endl;
    SetConsoleTextAttribute(hConsole, 5);

/// recabar valores para realizar el calculo

    cout << "\t\t" << "-->Ingrese el coeficiente a: ";
    SetConsoleTextAttribute(hConsole, 12);
    cin >> a; ///se ingresa el coeficiente de a mediante el taclado
    if (cin.fail()or a == 0) {
        SetConsoleTextAttribute(hConsole, 8);
        cout << "\t\t" << "El coeficiente ingresado de a no es valido" << endl;
        cout << "\t\t" << "El programa se cerrara..." << endl;
        exit(-1);
    }
    SetConsoleTextAttribute(hConsole, 5);
    cout << "\t\t" << endl;
    cout << "\t\t" << "Ingrese el coeficiente b: ";
    SetConsoleTextAttribute(hConsole, 12);
    cin >> b; ///se ingresa el coeficiente de b mediante el taclado
    if (cin.fail()) {
        SetConsoleTextAttribute(hConsole, 8);
        cout << "\t\t" << "El coeficiente ingresado de b no es valido" << endl;
        cout << "\t\t" << "El programa se cerrara..." << endl;
        exit(-1);
    }
    SetConsoleTextAttribute(hConsole, 5);
    cout << "\t\t" << endl;
    cout << "\t\t" << "Ingrese el coeficiente c: ";
    SetConsoleTextAttribute(hConsole, 12);
    cin >> c ; ///se ingresa el coeficiente de c mediante el taclado
    if (cin.fail()) {
        SetConsoleTextAttribute(hConsole, 8);
        cout << "\t\t" << "El coeficiente ingresado de c no es valido" << endl;
        cout << "\t\t" << "El programa se cerrara..." << endl;
        exit(-1);
    }
    cout << "\t\t" << endl;

///Proceso para hallar los valores de x1 y x2

    d=(b * b - 4 * a * c); ///formula general de la ecuacion cuadratica

    cout << "\t\t" << "Discriminante = "<< d << endl; ///se obtiene el coeficiente del discriminante

///condiciones para obtener los resultados

    if(d > 0) {///condicion si discrimante es mayor a 0
            X1=(- b + sqrt(d)) / (2*a);
            X2=(- b - sqrt(d)) / (2*a);
            cout << "\t\t" <<"X1 = " << X1 << endl;
            cout << "\t\t" <<"X2 = " << X2 << endl;
        }
        else if (d == 0) ///condicion si discriminante es igual a 0
        {
        X1 = -b / (2*a);
        X2 = X1;
        cout << "\t\t" << "X1 = " << X1 << endl;
        cout << "\t\t" << "X2 = " << X2 << endl;
        }
            else if (d < 0) ///condicion si discriminate es menor a 0
            {
            d2 = - 1 * d;
            b1 = - b / (2*a);
            d3 = sqrt(d2) / (2*a);
            d3 = fabs(d3);
            X1 = b1;
            X2 = b1;
            cout << "\t\t" << "X1 = " << X1 << "+" << "(" << d3 << ")" << "i" << endl;
            cout << "\t\t" << "X2 = " << X2 << "-" << "(" << d3 << ")" << "i" << endl;
            }

            Regresar_ecuacion();
}
