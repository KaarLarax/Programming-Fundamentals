#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <string.h>
#include <math.h>

void conociendo_apuntadores();
void caracteres();
void par_imp_ce(int *num);
void cubo(double *num);

using namespace std;

int main()
{
    int N; double num;

    conociendo_apuntadores();
    system("pause");
    system("cls");
    cout << "Ingrese el valor a indentificar: ";
    cin >> N;
    par_imp_ce(&N);
    cout << endl << endl;
    system("cls");
    cout << "Ingrese el valor a calcular el cubo: ";
    cin >> num;
    cubo(&num);
    cout << endl;
    cout << "Manejando caracteres y apuntadores";
    caracteres();
    cout << endl << endl;
    system("pause");

    return 0;
}

void conociendo_apuntadores()
{
    int i=576;
    int *p;
    p = &i;

    float e = 2.71727;
    float *q;
    q = &e;

    char vocales[]={'A','E', 'I', 'O', 'U'};
    char *v;
    v=&vocales[0];

    double g=9.8;
    double *ag;
    ag = &g;

    system("cls");
    system("color 0a");

    cout << "\t\t" << "+++ Apuntadores +++" << endl << endl;
    cout << "\t" << "+++MOSTRANDO CONTENIDO Y DIRECCIONES" << endl;
    cout << "\t" << "------------------------------------" << endl;
    cout << "\t\t\t" << *p << "\t\t\t" << &p << endl;
    cout << "\t\t\t" << *q << "\t\t\t" << &q << endl;
    cout << "\t\t\t" << *ag << "\t\t\t" << &ag << endl;
    cout << "\t\t\t" << *v << "\t\t\t" << &vocales << endl;

}

void caracteres(void)
{
    char *pc, c;
    pc=&c;
    system("cls");
    system("color 0b");
    cout << endl << "Mostrando algunos caracteres de codigo ASCII" << endl;
    cout << endl << "Utilizando Variables Apuntador... " << endl;
    for(c='!'; c<='z'; c++){cout <<*pc<<"   ";}
}
void par_imp_ce(int *num)
{
    system("cls");
    system("color 0c");
    cout << endl << "Identificando si un numero es cero/Par/impar" << endl;
    cout << endl <<"Por medio de apuntadores... " << endl;
    if(*num== 0)
    {
        cout << endl << "Es 0" << endl;
    }
        else if(*num%2==0)
        {
            cout << endl << "Es par" << endl;
        }
            else if(*num%2!=0)
            {
                cout << endl << "Es par" << endl;
            }
            system("pause");
}
void cubo(double *num)
{
    double c;
    c=pow(*num,3);
    cout << "El valor del cubo es " << c << endl;
    system("pause");
}
