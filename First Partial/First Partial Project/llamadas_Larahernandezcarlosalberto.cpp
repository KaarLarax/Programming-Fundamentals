///Lara Hernandez Carlos Alberto 476759
///librerias
#include <iostream>
#include <stdlib.h>
#include <locale>
#include <math.h>
/// se defininen variables
int clave;
double tiempo, costo;

using namespace std;

int main()
{///inicia el programa
    setlocale(LC_CTYPE, "Spanish" ); ///cambiar la region a español
    system( "color 0B" ); ///cambiar el color de la consola

   ///opciones para el menu
    cout << "*******************************" << endl;
    cout << "****      LLAMADAS LARA    ****" << endl;
    cout << "**** 12) América del Norte ****" << endl;
    cout << "**** 15) América Central   ****" << endl;
    cout << "**** 18) América del Sur   ****" << endl;
    cout << "**** 19) Europa            ****" << endl;
    cout << "**** 13) Asia              ****" << endl;
    cout << "****  0) No llamar         ****" << endl;
    cout << "*******************************" << endl;
    cout << "Ingrese la clave de la zona a donde desea realizar la llamada"  << endl;
    cin >> clave;
        ///si se ingresa un caracter el programa imprime en pantalla que se revisen la opcion seleccionanda
        if (cin.fail() or (clave<0) ) {
            cout << "Opcion incorrecta" << endl;
            cout << "La unicas claves a donde se pueden realizar llamadas se encuentran en el menu, revise porfavor" << endl;

        }
            else
            switch (clave){

             case 12:///Se realiza la llamada hacia America del norte
            system("cls");
            system( "color 01" ); ///cambiar el color de la consola
            cout << "Usted esta marcando a America del norte" << endl;
            cout << "Ingrese el tiempo de la duracion de la llamada en minutos: "; cin >> tiempo; cout << endl;
            if (cin.fail() or tiempo<=0) {
                cout << "Los valores son incorrectos, revisar porfavor " << endl;
                }

                    else {
                    costo=tiempo*2;
                    cout << "Su costo por la llamada es: " << costo << "$" << endl;
                }
            break;

            case 15:///Se realiza la llamada hacia America central
            system("cls");
            system( "color 02" ); ///cambiar el color de la consola
            cout << "Usted esta marcando a América Central" << endl;
            cout << "Ingrese el tiempo de la duracion de la llamada en minutos: "; cin >> tiempo; cout << endl;
            if (cin.fail() or tiempo<=0) {
                cout << "Los minutos son incorrectos, revisar porfavor " << endl;

            }
                else {
                    costo=tiempo*2.2;
                    cout << "Su costo por la llamada es: " << costo << "$" << endl;
                }
        break;
        case 18:///Se realiza la llamada hacia America del Sur
            system("cls");
            system( "color 03" ); ///cambiar el color de la consola
            cout << "Usted esta marcando a América del Sur" << endl;
            cout << "Ingrese el tiempo de la duracion de la llamada en minutos: "; cin >> tiempo; cout << endl;
            if (cin.fail() or tiempo<=0) {
                cout << "Los minutos son incorrectos, revisar porfavor " << endl;

            }
                else {
                    costo=tiempo*4.5;
                    cout << "Su costo por la llamada es: " << costo << "$" << endl;
                }
        break;
        case 19:///se realiza la llamada hacia Europa
            system("cls");
            system( "color 04" ); ///cambiar el color de la consola
            cout << "Usted esta marcando a Europa" << endl;
            cout << "Ingrese el tiempo de la duracion de la llamada en minutos: "; cin >> tiempo; cout << endl;
            if (cin.fail() or tiempo<=0) {
                cout << "Los minutos son incorrectos, revisar porfavor " << endl;

            }
                else {
                    costo=tiempo*3.5;
                    cout << "Su costo por la llamada es: " << costo << "$" << endl;
                }
        break;
        case 13:///se realiza la llamada hacia Asia
            system("cls");
            system( "color 07" ); ///cambiar el color de la consola
            cout << "Usted esta marcando a Asia" << endl;
            cout << "Ingrese el tiempo de la duracion de la llamada en minutos: "; cin >> tiempo; cout << endl;
            if (cin.fail() or tiempo<=0) {
                cout << "Los minutos son incorrectos, revisar porfavor " << endl;

            }
                else {
                    costo=tiempo*7.5;
                    cout << "Su costo por la llamada es: " << costo << "$" << endl;
                }
        break;

        case 0:/// si no se quieren realizar llamadas
            system("cls");
            system( "color 06" ); ///cambiar el color de la consola
            cout << "Saliendo......" << endl;
            system("pause");

        break;

        default: { /// cuando no se cumple las claves mostradas en el menu
                    cout << "Opcion incorrecta" << endl;
                    cout << "La unicas claves a donde se pueden realizar llamadas se encuentran en el menu, revise porfavor" << endl;
                    }
            }







    return 0;

} ///final del programa
