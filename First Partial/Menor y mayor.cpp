///librerias
#include <iostream> ///e-s
#include <stdlib.h> ///sistema
#include <locale> ///idioma
#include <math.h> ///funcion matematica
///*****************************************************************************************

using namespace std;

int main()
{ ///inicio de main

///declaracion de las variables

    double p1, p2, p3;
///*****************************************************************************************

///configuracion de consola

    setlocale(LC_CTYPE, "Spanish" ); ///cambia la region a español
    system( "cls" ); ///limpia la consola
    system( "color 0B" ); ///cambia el color de la consola

///titulos del programa

    cout << "Comparacion de precios" << endl;
    cout << "Por medio de condicionales" << endl;

/// recabar valores para realizar el calculo

    cout << "Igrese el primer precio... " ; cin >> p1; ///se ingresa el primer precio por el teclado
    cout << endl; ///salto de linea
    if (cin.fail()or p1<0) {
        cout << "El primer precio no es valido... " <<endl;
        cout << "revisar porfavor... " <<endl;
        exit(-1);
        }

    cout << "Igrese el segundo precio... " ; cin >> p2; ///se ingresa el segundo precio por el teclado
    cout << endl; ///salto de linea
    if (cin.fail()or p2<0) {
        cout << "El segundo precio no es valido... " <<endl;
        cout << "revisar porfavor... " <<endl;
        exit(-1);
        }

    cout << "Igrese el tercer precio... " ; cin >> p3; ///se ingresa el tercer precio por el teclado
    cout << endl; ///salto de linea
    if (cin.fail()or p3<0) {
        cout << "El tercer precio no es valido... " <<endl;
        cout << "revisar porfavor... " <<endl;
        exit(-1);
        }
///**********************************************************************************************************

///Proceso de comparacion de precios
 if((p1==p2) && (p3==p1)){
    cout << "los tres precios son iguales" << endl;
    }
///**********************************************************************************************************
    else if((p1==p2) && (p1<p3)) {

        cout << "el primer precio y el segundo son iguales" << endl;
        cout << "el tercer precio es menos economico: "; cout << p3 << endl;
    }

        else if((p1==p2) && (p1>p3)){

            cout << "el primer precio y el segundo son iguales" << endl;
            cout << "el tercer precio es mas economico: "; cout << p3 << endl;
        }
///**********************************************************************************************************
            else if((p1==p3) && (p1<p2)) {

                cout << "el primer precio y el tercero son iguales" << endl;
                cout << "el segundo precio es el menos economico: "; cout << p2 << endl;
            }
                else if((p1==p3) && (p1>p2)) {

                    cout << "el primer precio y el tercero son iguales" << endl;
                    cout << "el segundo precio es mas economico: "; cout << p2 << endl;
                }
///**********************************************************************************************************
                     else if((p2==p3) && (p2<p1)) {


                        cout << "el segundo precio y el tercero son iguales" << endl;
                        cout << "el primer precio es menos economico: "; cout << p1 << endl;
                     }
                         else if((p2==p3) && (p2>p1)) {

                            cout << "el segundo precio y el tercero son iguales" << endl;
                            cout << "el primer precio es mas economico: "; cout << p1 << endl;

                        }
///**********************************************************************************************************

                            else if((p1<p2) && (p2<p3)) {
                                cout << "el primer precio es mas economico: "; cout << p1 << endl;
                                cout << "el tercer precio es menos economico: "; cout << p3 << endl;
                            }
                                else if((p1<p3) && (p2>p3)) {
                                    cout << "el primer precio es mas economico: "; cout << p1 << endl;
                                    cout << "el segundo precio es menos economico: "; cout << p2 << endl;
                                }
///**********************************************************************************************************

                                    else if((p2<p1) && (p1<p3)) {
                                        cout << "el segundo precio es mas economico: "; cout << p2 << endl;
                                        cout << "el tercer precio es menos economico: "; cout << p3 << endl;
                                    }
                                        else if((p2<p3) && (p1>p3)) {
                                            cout << "el segundo precio es mas economico: "; cout << p2 << endl;
                                            cout << "el primer precio es menos economico: "; cout << p1 << endl;
                                        }
///**********************************************************************************************************

                                            else if((p3<p1) && (p1<p2)) {
                                                cout << "el tercer precio es mas economico: "; cout << p3 << endl;
                                                cout << "el segundo precio es menos economico: "; cout << p2 << endl;
                                            }
                                                else if((p3<p2) && (p1>p2)) {
                                                    cout << "el tercer precio es mas economico: "; cout << p3 << endl;
                                                    cout << "el primer precio es menos economico: "; cout << p1 << endl;
                                                }



///**********************************************************************************************************




///**********************************************************************************************************

/// parte del estatus del imc









    return 0;

} ///final de main
