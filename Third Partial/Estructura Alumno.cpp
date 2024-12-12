#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include <math.h>

void muestra_info1(struct Alumno a);
void muestra_info2(struct Alumno b);
void muestra_info3(struct Alumno c);
void pedir_info(void);
void syllabus(struct Alumno a, struct Alumno b, struct Alumno c);
void promedio_final(double x);
void limpieza(void);

using namespace std;

struct Alumno
{
 int ncuenta;
 char nombre[50];
 char fecha_ing[15];
 int sem;
 int gpo;
 double prom_p1;
 double prom_p2;
 double prom_p3;
 int edad;
};

Alumno a,b,c;

int main()
{
    setlocale(LC_CTYPE, "spanish"); // cambiar a español el idioma
    SetConsoleCP(1252); // Cambiar STDIN
    SetConsoleOutputCP(1252); // Cambiar STDOUT
    //Inicializaciones de los valores de la estructura a
    a.ncuenta=476759;
    strcpy(a.nombre,"LARA HERNANDEZ CARLOS ALBERTO");
    strcpy(a.fecha_ing,"25/07/22");
    a.sem=1;
    a.gpo=1;
    a.prom_p1=9;
    a.prom_p2=8.9;
    a.prom_p3=9;
    a.edad=18;
    //Inicializaciones de los valores de la estructura b
    b.ncuenta=426512;
    strcpy(b.nombre,"JASO CASEMIRO IVAN ALEJANDRO");
    strcpy(b.fecha_ing,"25/07/22");
    b.sem=1;
    b.gpo=1;
    b.prom_p1=7.8;
    b.prom_p2=8.2;
    b.prom_p3=6.8;
    b.edad=18;
    //Inicializaciones de los valores de la estructura c
    limpieza();

    pedir_info();

    limpieza();
    muestra_info1(a);
    cout << endl;
    cout << "\t\t" << "------------------------------------" << endl;
    cout << "\t\t" << "Tamaño en bytes de la estructura (a)" << sizeof(a) << endl;
    cout << "\t\t" << "------------------------------------" << endl;
    system("pause");
    limpieza();

    muestra_info2(b);
    cout << endl;
    cout << "\t\t" << "------------------------------------" << endl;
    cout << "\t\t" << "Tamaño en bytes de la estructura (b)" << sizeof(b) << endl;
    cout << "\t\t" << "------------------------------------" << endl;
    system("pause");
    limpieza();

    muestra_info3(c);
    cout << endl;
    cout << "\t\t" << "------------------------------------" << endl;
    cout << "\t\t" << "Tamaño en bytes de la estructura (c)" << sizeof(c) << endl;
    cout << "\t\t" << "------------------------------------" << endl;
    system("pause");
    limpieza();

    cout << "\t\t" << "-------------------------------" << endl;
    cout << "\t\t" << "PROMEDIOS FINALES UAEH SYLLABUS" << endl;
    cout << "\t\t" << "-------------------------------" << endl;

    syllabus(a,b,c);
    system("pause");
    limpieza();


    return 0;

}

void muestra_info1(struct Alumno a)
{
    cout << "\t\t" << "Datos que contienen las estructuras" << endl;
    cout << "\t\t" << a.ncuenta <<  endl;
    cout << "\t\t"; puts(a.nombre);
    cout << "\t\t"; puts(a.fecha_ing);
    cout << "\t\t" << a.sem << endl;
    cout << "\t\t" << a.gpo << endl;
    cout << "\t\t" << a.prom_p1 << endl;
    cout << "\t\t" << a.prom_p2 << endl;
    cout << "\t\t" << a.prom_p3 << endl;
    cout << "\t\t" << a.edad << endl;
}
void muestra_info2(struct Alumno b)
{
    cout << "\t\t" << "Datos que contienen las estructuras" << endl;
    cout << "\t\t" << b.ncuenta <<  endl;
    cout << "\t\t"; puts(b.nombre);
    cout << "\t\t"; puts(b.fecha_ing);
    cout << "\t\t" << b.sem << endl;
    cout << "\t\t" << b.gpo << endl;
    cout << "\t\t" << b.prom_p1 << endl;
    cout << "\t\t" << b.prom_p2 << endl;
    cout << "\t\t" << b.prom_p3 << endl;
    cout << "\t\t" << b.edad << endl;
}
void muestra_info3(struct Alumno c)
{
    cout << "\t\t" << "Datos que contienen las estructuras" << endl;
    cout << "\t\t" << c.ncuenta <<  endl;
    cout << "\t\t"; puts(c.nombre);
    cout << "\t\t"; puts(c.fecha_ing);
    cout << "\t\t" << c.sem << endl;
    cout << "\t\t" << c.gpo << endl;
    cout << "\t\t" << c.prom_p1 << endl;
    cout << "\t\t" << c.prom_p2 << endl;
    cout << "\t\t" << c.prom_p3 << endl;
    cout << "\t\t" << c.edad << endl;
}

void pedir_info(void)
{
    cout << "\t\t" << "Nombre: "; cin.getline(c.nombre,50);
    cout << "\t\t" << "Fecha de ingreso: "; cin.getline(c.fecha_ing,10);
    cout << "\t\t" << "Numero de cuenta: "; cin >> c.ncuenta;
    cout << "\t\t" << "Semestre: "; cin >> c.sem;
    cout << "\t\t" << "Grupo: "; cin >> c.gpo;
    cout << "\t\t" << "Promedio P1: "; cin >> c.prom_p1;
    cout <<"\t\t" << "Promedio P2: "; cin >> c.prom_p2;
    cout << "\t\t" << "Promedio P3: "; cin >> c.prom_p3;
    cout << "\t\t" << "Edad: "; cin >> c.edad;
    Sleep(500);
}

void syllabus(struct Alumno a,struct Alumno b,struct Alumno c)
{
    double pa, pb, pc;
    pa=((a.prom_p1*0.3)+(a.prom_p2*0.3)+(a.prom_p3*0.4));
    pb=((b.prom_p1*0.3)+(b.prom_p2*0.3)+(b.prom_p3*0.4));
    pc=((c.prom_p1*0.3)+(c.prom_p2*0.3)+(c.prom_p3*0.4));
    cout << "\t\t"<< "Promedios sin redondear de a: " << pa << endl;
    cout << "\t\t"<< "Promedios sin redondear de b: " << pb << endl;
    cout << "\t\t"<< "Promedios sin redondear de c: " << pc << endl;
    system("pause");
    system("cls");
    cout << "El promedio de a es:";
    promedio_final(pa);
    cout << "El promedio de b es:";
    promedio_final(pb);
    cout << "El promedio de c es:";
    promedio_final(pc);

}

void promedio_final(double x)
{
    if(x>=7.00d)
    {
        cout << "\t\t" << "Aprobatorio: "<<round(x) << endl;
    }
    else if(x<7.00d)
    {
        cout << "\t\t" << "Reprobatorio: " << x << endl;
    }
}
void limpieza(void)
{
    system("color 8");
    system("cls");
}
