///Librerias
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <locale>
#include <math.h>


using namespace std;

int main() { /// inicio del programa
    int cp, cn, cc, num;
    char resp; /// respuesta S/s = si, N/n = NO
    bool band;

    do { ///Inicio de do-while
    cp = 0; cn = 0, cc = 0, num = 0;
    setlocale(LC_CTYPE,"Spanish"); /// cambiar el idioma a español
    system("cls"); /// limpia la consola
    system("color 0B"); /// Cambia el color de las letras a cyan

    cout << endl << endl;
	cout << "Identificando numeros enteros y ademas positivos... " << endl;

	for(int i=1; i<11; i++) { /// se inicia el ciclo for
		cout << endl;
		cout << "Por favor ingresar el numero a identificar: ";
		cin >> num;///Se ingresa el numero desde el teclado
		cout << endl;

		if( num >= 0 && !(cin.fail()) ) {///Condiciones de ingreso de
		    if(num == 0) {///Si el numero es 0
		        cc++;
                band = 1;
            } else if(num % 2 == 0){///Si el numero es par
                cp++;
            } else if(num % 2 != 0) {///Si el numero es impar
                cn++;
            }
            cout << endl << "Identificando... " << endl;
        } else {/// Si el numero es negativo o letras
            cin.clear();
            cin.ignore();
            cout << endl << "Solamente se solicitaron numeros positivos" << endl;
            cout << endl << "Tampoco se aceptan letras" << endl;
            band = 0;
            break;
        }
	} /// Se termina el ciclo for

    if (band == 1) {
	cout << endl << endl;
	cout << "********************************" << endl;
	cout << "* Los totales son...            " << endl;
	cout << "* Total de ceros:               " << cc << endl;
	cout << "* Total de pares:               " << cp << endl;
	cout << "* Total de inpares:             " << cn << endl;
	cout << "********************************" << endl;
	}

	cout << endl << "Desea usted regresar al programa ((S)/(N))?... " << endl;
	cin >> resp;
    }
    while (resp == 'S'|| resp == 's' || resp == '1' );

	cout << "No ingreso correctamente la respuesta" << endl;
	cout << "El programa se cerrara" << endl;

	system("pause");
	return 0;

}
