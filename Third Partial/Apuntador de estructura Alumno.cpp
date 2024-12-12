#include <iostream>
#include <string.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

void ver_info(struct Alumno *);
void pedir_info_w(void);
void division(double *p, double *q);
struct Alumno{
int ncuenta;
char nombre[100];
char fecha_ing[15];
int sem;
int gpo;
float promedio;
int edad;
};
// Declaracion e inicializacion de variables tipo "estructura"
struct Alumno W;
struct Alumno X = {476759, "Carlos Alberto Lara Hernandez", "25/07/2022", 1, 1, 7.5, 18};
struct Alumno Y = {486010, "Giovanni Del torno Hernandez", "25/07/2022", 1, 1, 9.0, 19};

using namespace std;

int main()
{
    double p,q;
    // Declaracion de estructuras apuntador
    system("cls");
    cout << "OPERADOR APUNTADOR EN ESTRUCTURAS" << endl << endl;
    Sleep(2000);
    cout << "Mostrando la informacion del Alumno X" << endl << endl;
    ver_info(&X);
    system("pause");
    Sleep(1000);
    system("cls");
    cout << "Mostrando la informacion del Alumno Y" << endl << endl;
    ver_info(&Y);
    system("pause");
    Sleep(1000);
    system("cls");
    pedir_info_w();
    cout << "Mostrando la informacion del Alumno Y" << endl << endl;
    ver_info(&W);
    system("pause");
    Sleep(1000);
    system("cls");
    cout << endl << endl << endl;
    cout << "DIVISIONES CON APUNTADORES" << endl << endl;
    cout << "Ingrese el dividendo: "; cin >> p; cout << endl << endl;
    cout << "Ingrese el divisor: "; cin >> q; cout << endl << endl;
    division(&p, &q);

    return 0;
}

void ver_info(struct Alumno *ptr1)
{
    cout << "*****************************************************" << endl << endl;
    cout << "Numero de cuenta: " << ptr1 -> ncuenta << endl;
    cout << "Nombre: " << ptr1 -> nombre << endl;
    cout << "Fecha de ingreso: " << ptr1 -> fecha_ing << endl;
    cout << "Semestre: " << ptr1 -> sem << endl;
    cout << "Grupo: " << ptr1 -> gpo << endl;
    cout << "Promedio: " << ptr1 -> promedio << endl;
    cout << "Edad: " << ptr1 -> edad << endl;
}
void pedir_info_w(void)
{
    struct Alumno *ptr3 = &W;
    cout<<"\t"<<"\t"<<"\t"<<"\t"<<"~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~"<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"\t"<<"~×~              ENTRADA DEL ALUMNO W           ~×~"<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"\t"<<"~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~×~"<<endl<<endl;

    cout<<"~×~ Nombre: "; cin.getline(ptr3->nombre,50); cout<<endl;
    cout<<"~×~ Fecha de ingreso (DD/MM/AAAA): "; cin.getline(ptr3->fecha_ing,15); cout<<endl;
    cout<<"~×~ Numero de cuenta: "; cin>>ptr3->ncuenta; cout<<endl;
    cout<<"~×~ Semestre: "; cin>>ptr3->sem; cout<<endl;
    cout<<"~×~ Grupo: "; cin>>ptr3->gpo; cout<<endl;
    cout<<"~×~ Promedio: "; cin>>ptr3->promedio; cout<<endl;
    cout<<"~×~ Edad: "; cin>>ptr3->edad; cout<<endl<<endl;
}

void division(double *p, double *q)
{
    double resp;

    if((*q)!= 0)
    {
        resp = (*p)/(*q);
        cout << "El resultado es: " << endl;
    }
    else
    {
        cout << "El resultado es indeterminado" << endl;
    }
}
