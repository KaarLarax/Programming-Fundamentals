// CARLOS ALBERTO LARA HERNANDEZ
// No. de cuenta: 476759

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdio>
#include <limits>

void Cconfig();

void password();

void portada();

bool askretorno();

void genere_tiempo();

int askmenu();

double conv_lib(double);

void figura();

void multiplo7(int);

bool despedida();

const HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;

int main() {
    bool exit_while = true;
    double gr;
    int mul;
    password();
    portada();
    do {
        system("cls");
        SetConsoleTextAttribute(hConsole, 13); // cambia de color el texto a morado claro
        cout << "\t\t" << "+-----------------------------------------------------+" << endl;
        cout << "\t\t" << "|---------|| LARA HERNANDEZ CARLOS ALBERTO||----------|" << endl;
        cout << "\t\t" << "+---------++----++------------------++----++----------+" << endl;
        cout << "\t\t" << "|---------------|| MENU DE OPCIONES ||----------------|" << endl;
        cout << "\t\t" << "+----------++---++------------------++---++-----------+" << endl;
        cout << "\t\t" << "|----------|| C) CONVERSION              ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| F) FIGURA                  ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| M) MULTIPLO DE 7           ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| Q) SALIR                   ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
        switch (tolower(askmenu())) {
            case 'c':
                system("cls");
                cout << "\t\t" << "+----------++---++------------------++---++-----------+" << endl;
                cout << "\t\t" << "|----------|| C) CONVERSION              ||-----------|" << endl;
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
                cout << "\t\t" << "Ingrese los gramos que desea convertir" << endl;
                fflush(stdin);
                cout << "\t\t--> ";
                if (!(cin >> gr) || gr <= 0) {
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(), '\n');
                    cout << "\t\t" << "Los datos son incorrectos" << endl;
                } else {
                    cout << "\t\t" << "Los gramos en libras son: " << conv_lib(gr) << endl;
                }
                break;
            case 'f':
                system("cls");
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
                cout << "\t\t" << "|----------|| F) FIGURA                  ||-----------|" << endl;
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
                figura();

                break;
            case 'm':
                system("cls");
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
                cout << "\t\t" << "|----------|| M) MULTIPLO DE 7           ||-----------|" << endl;
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
                cout << "\t\t" << "Ingrese el numero que desea saber si es multiplo de 7" << endl;
                cout << "\t\t--> ";
                if (!(cin >> mul) || mul <= 0) {
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(), '\n');
                    cout << "\t\t" << "Los datos son incorrectos" << endl;
                } else {
                    multiplo7(mul);
                }
                break;
            case 'q':
                exit_while = despedida();
                continue;
            default:
                SetConsoleTextAttribute(hConsole, 12);
                cout << "\t\t" << "La opcion seleccionanda no se encuentra en el menú" << endl;
                cout << "\t\t" << "Intente nuevamente" << endl;
                continue;

        }
        exit_while = askretorno();
    } while (exit_while);
    return 0;
}

void password() {

    char pass[15] = {"Donnie Darko"}; // Varible de cadena que se comparara con la variable magicword
    char magicword[15]; // Variable que almacena la cadena de caracteres por console input
    int conpass = 3;

    Cconfig();

    while (true) {
        SetConsoleTextAttribute(hConsole, 9); // Cambia de color el texto a azul oscuro
        cout << "\t\t" << "Ingrese la contraseña ";
        SetConsoleTextAttribute(hConsole, 12); // Cambia de color el texto a rojo claro
        cin.getline(magicword, 13);
        if (strcmp(pass, magicword) == 0) //compara las variables que almacenan cadenas para saber si son identicas
        {
            SetConsoleTextAttribute(hConsole, 9);
            cout << "\t\t" << "Contraseña correcta" << endl;
            SetConsoleTextAttribute(hConsole, 5);
            cout << "\t\t" << "Bienvenido" << endl << endl;
            Sleep(1000);
            break;
        } else // Si las cadenas no son identicas el programa se cierra
        {
            SetConsoleTextAttribute(hConsole, 8);
            cout << "\t\t" << "Contraseña incorrecta" << endl;

            conpass--;
            if (conpass <= 0) {
                cout << "\t\t" << "Numero de intentos superados" << endl;
                exit(-1);
            }
            cout << "\t\t" << "Numero de intentos: " << conpass << endl;
            genere_tiempo();
            system("cls");
        }
    }
    system("cls");
}

bool askretorno() {
    SetConsoleTextAttribute(hConsole, 9); // Cambia el color de solo el texto seleccionado a fondo negro y texto azul
    char askreturn;

    cout << endl << endl;
    cout << "\t\t" << "¿Usted desea regresar al menu principal?" << endl;
    cout << "\t\t" << "Ingrese S para hacerlo" << endl;

    fflush(stdin); // Limpia el buffer del la entrada
    cout << "\t\t--> ";
    cin >> askreturn;
    if (toupper(askreturn) == 'S') { // Se compara si el caracter ingresado convertido en mayuscula es identico a S
        cout << "\t\t" << "Regresando" << endl;
        return true;
    } else {
        return despedida(); // Se ocupa la funcion para dar la despedida si no se desea regresar al menu
    }
}

void portada() {
    SetConsoleTextAttribute(hConsole, 9); // Cambia el color de solo el texto seleccionado a fondo negro y texto azul
    cout << "\t\t" << " :::    :::     :::     :::::::::: :::    ::: " << endl;
    cout << "\t\t" << " :+:    :+:   :+: :+:   :+:        :+:    :+: " << endl;
    cout << "\t\t" << " +:+    +:+  +:+   +:+  +:+        +:+    +:+ " << endl;
    cout << "\t\t" << " +#+    +:+ +#++:++#++: +#++:++#   +#++:++#++ " << endl;
    cout << "\t\t" << " +#+    +#+ +#+     +#+ +#+        +#+    +#+ " << endl;
    cout << "\t\t" << " #+#    #+# #+#     #+# #+#        #+#    #+# " << endl;
    cout << "\t\t" << "  ########  ###     ### ########## ###    ### " << endl << endl;
    SetConsoleTextAttribute(hConsole,
                            12); // Cambia el color de solo el texto seleccionado a fondo negro y texto rojo claro
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
    cout << "\t\t" << "Presione cualquier tecla para continuar...    ";
    getch(); //lee el teclado
    system("cls");
}

void genere_tiempo() // hacer un delay propio
{
    for (int i = 0; i < 30111; i++) { //for externo
        for (int j = 0; j < 30000; j++) {}
    }
}

void Cconfig() {
    setlocale(LC_CTYPE, "Spanish"); // Cambia el idioma en español
    system("cls"); // Limpia la consola
    system("color D"); // Cambia el color de la consola a purpura claro
}

int askmenu() {
    char x;

    cout << "\t\t" << "Seleccione una opcion... ";
    SetConsoleTextAttribute(hConsole,
                            12); // Cambia el color de solo el texto seleccionado a fondo negro y texto rojo claro
    fflush(stdin);
    cin >> x;
    SetConsoleTextAttribute(hConsole,
                            10); // Cambia el color de solo el texto seleccionado a fondo negro y texto verde claro
    if (cin.fail()) {
        fflush(stdin);
        return 0;
    } else {
        return x;
    }
}

double conv_lib(double x) {
    return (x * 0.00220462);
}

void figura() {
    SetConsoleTextAttribute(hConsole,
                            90); // Cambia el color de solo el texto seleccionado a fondo morado y texto verde claro
    char ascii = 65;
    for (int i = 0; i <= 4; i++) {
        cout << "\t\t\t\t";
        for (int j = 0; j <= i; j++) {
            cout << ascii;
        }
        ascii += 2;
        cout << endl;
    }
    cout << endl << endl;
}

void multiplo7(int x) // Funcion para determinar si un numero entero es multiplo de 7
{
    if ((x % 7) == 0) // Condicion si el residuo del numero entre 7 es identico a 0
    {
        cout << "\t\t" << "Su numero si es multiplo de 7" << endl << endl;
    } else  // Si la condicion es falsa
    {
        cout << "\t\t" << "Su numero no es multiplo de 7" << endl << endl;
    }
}

bool despedida() { // Funcion para terminar un programa
    SetConsoleTextAttribute(hConsole,
                            10);// Cambia el color de solo el texto seleccionado a fondo negro y texto verde claro
    cout << "\t\t" << "Gracias por usar este programa..." << endl;
    cout << "\t\t" << "Creado por Carlos Alberto lara Hernandez" << endl;
    cout << "\t\t" << "Adiosssssss...\n" << endl;
    return false;
}

