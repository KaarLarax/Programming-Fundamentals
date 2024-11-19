///librerias
#include <iostream> ///e-s
#include <stdlib.h> ///sistema
#include <locale> ///idioma
#include <math.h> ///funcion matematica
///*****************************************************************************************

using namespace std;

int main()
{ ///inicio de main

///definir variables
char opcion;
double raiz_c, num;
double inverso;
double base, ex, pot;
///configuracion de consola

    setlocale(LC_CTYPE, "Spanish" ); ///cambia la region a español
    system( "color 0B" ); ///cambia el color de la consola

///titulos del programa


cout << "\t " << "O~~       O~~O~~~~~~~~O~~~     O~~O~~     O~~" << endl;
cout << "\t " << "O~ O~~   O~~~O~~      O~ O~~   O~~O~~     O~~" << endl;
cout << "\t " << "O~~ O~~ O O~~O~~      O~~ O~~  O~~O~~     O~~" << endl;
cout << "\t " << "O~~  O~~  O~~O~~~~~~  O~~  O~~ O~~O~~     O~~" << endl;
cout << "\t " << "O~~   O~  O~~O~~      O~~   O~ O~~O~~     O~~" << endl;
cout << "\t " << "O~~       O~~O~~      O~~    O~ ~~O~~     O~~" << endl;
cout << "\t " << "O~~       O~~O~~~~~~~~O~~      O~~  O~~~~~" << endl;

cout << "\t " << "******************************" << endl;
cout << "\t " << "**** 1): A) RAIZ CUADRADA ****" << endl;
cout << "\t " << "**** 2): B) INVERSO       ****" << endl;
cout << "\t " << "**** 3): C) POTENCIA      ****" << endl;
cout << "\t " << "**** 0): S) SALIR         ****" << endl;
cout << "\t " << "******************************" << endl;
cout << "\t " << "Ingrese la opcion -----> " << endl;
cin >> opcion;

    switch (opcion) {
    case '1': case 'A': case 'a': /// Raiz Cuadrada
    cout << "\t" << "**** RAIZ CUADRADA ****" << endl;
    cout << "\t" << "****Ingrese el numero a calcular****: "; cin >> num; cout << endl;
        if (cin.fail() or num<0) {
            cout << "Los valores son incorrectos, revisar porfavor " << endl;
        }

            else {
                raiz_c= sqrt(num);
                cout << "la raiz cuadrada del numero es: " << raiz_c << endl;
            }
    break;

    case '2': case 'B': case 'b': /// Inverso
    cout << "\t" << "**** INVERSO ****" << endl;
    cout << "\t" << "Ingrese el valor del numero a calcular: "; cin >> num; cout << endl;
        if (cin.fail() or num == 0) {
            cout << "los valores no son correctos, revisar por favor..." << endl;

        }
            else {
                inverso=(1/num);
                cout << "el inverso del numero es: " << inverso << endl;
                }
    break;
    case '3': case 'C': case 'c': /// Potencia
    cout << "\t" << "**** POTENCIA ****" << endl;
    cout << "\t" << "Ingrese el valor de la base: "; cin >> base cout << endl;
    cout << "\t" << "Ingrese el valor del exponente: "; cin >> ex cout << endl;
        if ( (base==0 && exp<0) or cin.fail()) {
            cout << "
        }
    break;
    case '0': case 'S': case 's': /// Salir
    break;

    default: { /// cuando no se cumple ninguno de los anteriores
        cout << "Opcion incorrecta!!!" << endl;
        cout << "Favor de revisar las opciones del menu" << endl;
        }

    }
/// recabar valores para realizar el calculo







    return 0;

} ///final de main
