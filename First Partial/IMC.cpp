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

    double peso, altura, imc;
///*****************************************************************************************

///configuracion de consola

    setlocale(LC_CTYPE, "Spanish" ); ///cambia la region a español
    system( "cls" ); ///limpia la consola
    system( "color 0B" ); ///cambia el color de la consola

///titulos del programa

    cout << "Calcular indice de masa corporal" << endl;
    cout << "Por medio de formulas" << endl;

/// recabar valores para realizar el calculo

    cout << "Igrese su peso en kilogramos(Kg)... " ;
    cin >> peso; ///se ingresa el valor del peso por el teclado
    cout << endl; ///salto de linea
    cout << "Igrese su Altura en (m)... " ;
    cin >> altura; ///se ingresa el valor de la altura por el teclado
    cout << endl; ///salto de linea

///**********************************************************************************************************

///intervalos de valores del peso y altura

    if( peso>=40&&peso<=250 ) ///condicion del intervalo de valores de peso
        {
        cout << "Peso valido  "<<endl;

        if( altura>=1.0&&altura<=2.20 ) ///condicion del intervalo de valores de altura
            {
            cout << "Altura valida " <<endl;
           imc=peso/(altura*altura);
            cout <<"Su IMC es "<<imc<<endl;

///**********************************************************************************************************

/// parte del estatus del imc

                    if(imc<18.5) ///condicion si el IMC es menor a 18.5
                {
                cout << "estatus: bajo peso" << endl;
            }
                else if( imc>=18.5&&imc<=24.9 ) ///condicion si el IMC es de 18.5 a 24.9
                    {
                    cout << "estatus: normal" << endl;
                }
                    else if( imc>=25&&imc<=29.9) ///condicion si el IMC es de 25 a 29.9
                        {
                        cout << "estatus: sobre peso" << endl;
                    }
                        else if( imc>=30&&imc<=34.9) ///condicion si el IMC es de 30 a 34.9
                            {
                            cout << "estatus: obesidad leve" << endl;
                        }
                            else if( imc>=35&&imc<=39.9) ///condicion si el IMC es de 35 a 39.9
                                {
                                cout << "estatus: obesidad media" << endl;
                            }
                                else if( imc>=40.0) ///condicion si el IMC es mayor a 40
                                    {
                                    cout << "estatus: obesidad morbida" << endl;
                                }

           }
            else ///si la altura no es valida muestra la leyanda
                {
                cout << "Altura invalida... "  << endl;
            }
    }
        else ///si el peso no es valido o los dos valores muestra la leyenda
            {
            cout << "Por favor revisar los valores, son incorrectos... " << endl;
        }








    return 0;

} ///final de main
