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

    double a, b, c, d, d2, X1, X2, b1, d3;

///*****************************************************************************************

///configuracion de consola

    setlocale(LC_CTYPE,"Spanish");
    system("cls");
    system("color 0A");
///*****************************************************************************************


///titulos del programa

    cout <<"Equaciones de segundo grado"<< endl;
    cout <<"Por medio de la Formula General"<< endl;

/// recabar valores para realizar el calculo

    cout << "Ingrese el coeficiente a, porfavor... " ;
    cin >>a; ///se ingresa el valor de a mediante el taclado
    cout << endl;
    cout << "Ingrese el coeficiente b, porfavor... " ;
    cin >> b; ///se ingresa el valor de b mediante el taclado
    cout << endl;
    cout << "Ingrese el coeficiente c, porfavor... " ;
    cin >> c ; ///se ingresa el valor de c mediante el taclado
    cout << endl;

///Proceso para hallar los valores de x1 y x2

    d=(b*b-4*a*c); ///formula general de la ecuacion cuadratica

    cout << "Discriminante = "<<d<< endl; ///se obtiene el valor del discriminante

///condiciones para obtener los resultados

    if(d>0) ///condicion si discrimante es mayor a 0
        {
            X1=(-b+sqrt(d))/(2*a);
            X2=(-b-sqrt(d))/ (2*a);
            cout <<"X1 = "<<X1<< endl;
            cout <<"X2 = "<<X2<< endl;
        }
        else if (d==0) ///condicion si discriminante es igual a 0
        {
        X1= -b/(2*a);
        X2=X1;
        cout <<"X1 = "<<X1<< endl;
        cout <<"X2 = "<<X2<< endl;
        }
            else if (d<0) ///condicion si discriminate es menor a 0
            {
            d2= -1*d;
            b1= -b / (2*a);
            d3= sqrt(d2) / (2*a);
            X1=b1;
            X2=b1;
            cout <<"X1 = "<<X1<<"+"<<"("<<d3<<")"<<"i"<< endl;
            cout <<"X2 = "<<X2<<"-"<<"("<<-d3<<")"<<"i"<< endl;
            }


    return 0;

} /// Termina main
