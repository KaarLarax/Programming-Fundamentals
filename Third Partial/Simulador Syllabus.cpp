#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <locale>
#include <windows.h>
#include <conio.h>
// Mi primera libreria de forma local
#include "MiPrimeraLibreria.h"

void muestra_info1(struct Alumno a);
void muestra_info2(struct Alumno b);
void pedir_info();
void syllabus(struct Alumno a, struct Alumno b, struct Alumno c);
void tamanyo(struct Alumno a);
void tam_nombre(struct Alumno a, struct Alumno b, Alumno c);
void mayor_edad(struct Alumno a, struct Alumno b, Alumno c);
void calcula_anyo_nac(struct Alumno a, struct Alumno b, Alumno c);
void consola();

void ver_info_arr(struct Alumno2 lcc[5]);

using namespace std;

struct Alumno2{
int ncuenta;
char nombre[50];
char fecha_ing[15];
int sem;
int gpo;
char telefono[15];
char correo[40];
int num_asig;
}lcc[5]={{000001, "Elmer......", "01/01/01", 1, 1, "7720000001", "elmer01@gmail.com", 6},
          {000001, "Felipe....", "02/01/01", 1, 2, "7720000002", "Felipe02@gmail.com", 6},
          {000001, "Rodrigo...", "03/01/01", 1, 3, "7720000003", "Rodrigo03@gmail.com", 6},
          {000001, "Ana_Maria.", "04/01/01", 1, 4, "7720000004", "Ana_Maria04@gmail.com", 6},
          {000001, "Roberto...", "05/01/01", 1, 5, "7720000005", "Roberto05@gmail.com", 6}
};

struct Alumno{
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

Alumno a, b, c;

int main(){
    Cconfig();
    password();
    do{
    system("cls");
    SetConsoleTextAttribute(hConsole, 13); // cambia de color el texto a morado claro
    cout << "\t\t" << "+-----------------------------------------------------+" << endl;
    cout << "\t\t" << "|---------||    ARREGLO DE ESTRUCTURAS    ||----------|" << endl;
    cout << "\t\t" << "+-----------------------------------------------------+" << endl;
    cout << "\t\t" << "|---------|| LARA HERNANDEZ CARLOS ALBERTO||----------|" << endl;
    cout << "\t\t" << "+---------++----++------------------++----++----------+" << endl;
    cout << "\t\t" << "|---------------|| MENU DE OPCIONES ||----------------|" << endl;
    cout << "\t\t" << "+----------++---++------------------++---++-----------+" << endl;
    cout << "\t\t" << "|----------|| 1) MOSTRAR INFORMACION     ||-----------|" << endl;
    cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t\t" << "|----------|| 2) BUSCAR POR NOMBRE       ||-----------|" << endl;
    cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t\t" << "|----------|| 3) BUSCAR POR TELEFONO     ||-----------|" << endl;
    cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t\t" << "|----------|| 4) BUSCAR POR NUM_CUENTA   ||-----------|" << endl;
    cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t\t" << "|----------|| 5) SALIR                   ||-----------|" << endl;
    cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
    switch(askmenu())
    {
    case '1':
        cout << "\t\t" << "+----------++---++------------------++---++-----------+" << endl;
        cout << "\t\t" << "|----------|| 1) MOSTRAR INFORMACION     ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
        ver_info_arr(lcc);

    break;
    case '2':
        cout << "2";
    break;
    case '3':
        cout << "3";
    break;
    case '4':
        cout << "\t\t" << "Gracias por utilizar el programa..." << endl;
        exit(-1);
    break;
    case '5':
        cout << "\t\t" << "La opcion que escogio no se encuentra en el menu.." << endl;
    break;
    default:
        cout << "deafault";
    break;

    }
    }while(askretorno() == true);
    return 0;
}

void consola(){
    setlocale(LC_CTYPE, "Spanish");
    system("cls");
    system("color 85");
}

void muestra_info1(struct Alumno a){
    cout << " Datos que contiene la estructura (A)" << endl;
    cout << "   " << a.ncuenta << endl;
    cout << "   "; puts(a.nombre);
    cout << "   "; puts(a.fecha_ing);
    cout << "   " << a.sem << endl;
    cout << "   " << a.gpo << endl;
    cout << "   " << a.prom_p1 << endl;
    cout << "   " << a.prom_p2 << endl;
    cout << "   " << a.prom_p3 << endl;
    cout << "   " << a.edad << endl;
}

void muestra_info2(struct Alumno b){
    cout << " Datos que contiene la estructura (B)" << endl;
    cout << "   " << b.ncuenta << endl;
    cout << "   "; puts(b.nombre);
    cout << "   "; puts(b.fecha_ing);
    cout << "   " << b.sem << endl;
    cout << "   " << b.gpo << endl;
    cout << "   " << b.prom_p1 << endl;
    cout << "   " << b.prom_p2 << endl;
    cout << "   " << b.prom_p3 << endl;
    cout << "   " << b.edad << endl;
}

void pedir_info(){
    cout << "   Nombre: "; cin.getline(c.nombre, 50);
    cout << "   Fecha de ingreso: "; cin.getline(c.fecha_ing, 15);
    cout << "   Número de cuenta: "; cin >> c.ncuenta;
    cout << "   Semestre: "; cin >> c.sem;
    cout << "   Grupo: "; cin >> c.gpo;
    cout << "   Promedio 1P: "; cin >> c.prom_p1;
    cout << "   Promedio 2P: "; cin >> c.prom_p2;
    cout << "   Promedio 3P: "; cin >> c.prom_p3;
    cout << "   Edad: "; cin >> c.edad;
    cout << "-------------------------------------------------------" << endl;
    cout << " Datos que contiene la estructura (C)" << endl;
    cout << "   " << c.ncuenta << endl;
    cout << "   "; puts(c.nombre);
    cout << "   "; puts(c.fecha_ing);
    cout << "   " << c.sem << endl;
    cout << "   " << c.gpo << endl;
    cout << "   " << c.prom_p1 << endl;
    cout << "   " << c.prom_p2 << endl;
    cout << "   " << c.prom_p3 << endl;
    cout << "   " << c.edad << endl;
    cout << "   " << c.edad << endl;
}

void syllabus(struct Alumno a, struct Alumno b, struct Alumno c){
    double calificacion, prom_a, prom_b, prom_c;
    prom_a = ((a.prom_p1*0.3)+(a.prom_p2*0.3)+(a.prom_p3*0.4));
    prom_b = ((b.prom_p1*0.3)+(b.prom_p2*0.3)+(b.prom_p3*0.4));
    prom_c = ((c.prom_p1*0.3)+(c.prom_p2*0.3)+(c.prom_p3*0.4));

    cout << " Promedios sin redondear, para calificación..." << endl;
    cout << " -> Promedio (a): " << prom_a << endl;
    cout << " -> Promedio (b): " << prom_b << endl;
    cout << " -> Promedio (c): " << prom_c << endl;

    cout << " Promedios redondeados, para calificación..." << endl;
    cout << " -> Promedio (a): " << round(prom_a) << endl;
    cout << " -> Promedio (b): " << round(prom_b) << endl;
    cout << " -> Promedio (c): " << round(prom_c) << endl;

    if(round(prom_a) >= 7){
        cout << " El Alumno " << a.nombre << " acreditó el semestre :D" << endl;
    } else {
        cout << " El Alumno " << a.nombre << " NO acreditó el semestre :c" << endl;
    }if(round(prom_b) >= 7){
        cout << " El Alumno " << b.nombre << " acreditó el semestre :D" << endl;
    } else {
        cout << " El Alumno " << b.nombre << " NO acreditó el semestre :c" << endl;
    }if(round(prom_c) >= 7){
        cout << " El Alumno " << c.nombre << " acreditó el semestre :D" << endl;
    } else {
        cout << " El Alumno " << c.nombre << " NO acreditó el semestre :c" << endl;
    }
}

void tamanyo(struct Alumno a){
    int v1, v2, v3, v4, v5, v6, v7, v8, t;
    v1 = sizeof(a.ncuenta); cout << v1 << endl;
    v2 = sizeof(a.nombre); cout << v2 << endl;
    v3 = sizeof(a.fecha_ing); cout << v3 << endl;
    v4 = sizeof(a.sem); cout << v4 << endl;
    v5 = sizeof(a.gpo); cout << v5 << endl;
    v6 = sizeof(a.prom_p1); cout << v6 << endl;
    v7 = sizeof(a.prom_p2); cout << v7 << endl;
    v8 = sizeof(a.prom_p3); cout << v8 << endl;
    cout << sizeof(a.edad) << endl;
}

void tam_nombre(struct Alumno a, struct Alumno b, struct Alumno c){
    if(strlen(a.nombre) > strlen(b.nombre)){
        cout << " El nombre más largo es: " << a.nombre << endl;
    } else if(strlen(a.nombre) == strlen(b.nombre)){
        cout << " Los nombres de " << a.nombre << " y " << b.nombre << " son los más largos..." << endl;
    } if(strlen(b.nombre) > strlen(c.nombre)){
        cout << " El nombre más largo es: " << b.nombre << endl;
    } else if(strlen(b.nombre) == strlen(c.nombre)){
        cout << " Los nombres de " << b.nombre << " y " << c.nombre << " son los más largos..." << endl;
    } if (strlen(c.nombre) > strlen(b.nombre)){
        cout << " El nombre más largo es: " << c.nombre << endl;
    } else if(strlen(a.nombre) == strlen(c.nombre)){
        cout << "Los nombres de " << a.nombre << " y " << c.nombre << " son los más largos..." << endl;
    }
}

void mayor_edad(struct Alumno a, struct Alumno b, struct Alumno c){
    if(a.edad > b.edad && a.edad > c.edad){
        cout << "   El alumno " << a.nombre << " es el mayor de los 3..." << endl;
    } else if(b.edad > a.edad && b.edad > c.edad){
        cout << "   El alumno " << b.nombre << " es el mayor de los 3..." << endl;
    } else {
        cout << "   El alumno " << c.nombre << " es el mayor de los 3..." << endl;
    }
}

void calcula_anyo_nac(struct Alumno a, struct Alumno b, struct Alumno c){
    cout << "   El alumno " << a.nombre << " nació en el " << 2022-a.edad << endl;
    cout << "   El alumno " << b.nombre << " nació en el " << 2022-b.edad << endl;
    cout << "   El alumno " << c.nombre << " nació en el " << 2022-c.edad << endl;
}

void ver_info_arr(struct Alumno2 lcc[5])
{
    system("cls");
    cout << endl << endl;
    for(int i=0; i<5; i++ )
    {
        SetConsoleTextAttribute(hConsole, i);
        cout << "\t\t" << "No. de cuenta: " << lcc[i].ncuenta << endl;
        cout << "\t\t" << "Nombre: " << lcc[i].nombre << endl;
        cout << "\t\t" << "Fecha de Ingreso: " << lcc[i].fecha_ing << endl;
        cout << "\t\t" << "Semestre: " << lcc[i].sem << endl;
        cout << "\t\t" << "Grupo: " << lcc[i].gpo << endl;
        cout << "\t\t" << "Telefono: " << lcc[i].telefono << endl;
        cout << "\t\t" << "Correo: " << lcc[i].correo << endl;
        cout << "\t\t" << "Grupo: " << lcc[i].sem << endl;
        cout << "\t\t" << "Numero de asignaturas: " << lcc[i].num_asig << endl;
        cout << "\t\t" << "****************************************************" << endl << endl;
    } // Cierre del for
} // Cierre de la funcion
