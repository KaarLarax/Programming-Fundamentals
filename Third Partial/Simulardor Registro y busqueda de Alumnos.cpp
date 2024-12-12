#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale>
#include <cstring>
#include <math.h>
#include "milibreria.h"

void ver_info_arr(struct Alumno2 lcc[5]);
void busca_info(struct Alumno2 lcc[5]);
void busca_nombre(char b_nom[50], struct Alumno2 lcc[50]);
void busca_telefono(char b_tel[15], struct Alumno2 lcc[15]);
void busca_ncuenta(int b_cuenta, struct Alumno2 lcc[10]);


using namespace std;

struct Alumno2{
    int ncuenta2;
    char nombre2[50];
    char fecha_ing[15];
    int sem2;
    int gpo2;
    char telefono[15];
    char correo[40];
    int num_asig;
}lcc[5]={{123456, "Fernando...", "25/06/2022", 1, 1, "7712135288", "go123456@uaeh.edu.mx", 3},
         {214365, "Emmanuel...", "25/06/2020", 5, 3, "7712315893", "ra465789@uaeh.edu.mx", 4},
         {654321, "Sandro.....", "25/07/2023", 1, 1, "7723659685", "ma798656@uaeh.edu.mx", 8},
         {465651, "Carlos.....", "20/08/2022", 3, 2, "7756989846", "la894984@uaeh.edu.mx", 6},
         {653323, "Giovanni...", "28/09/2021", 1, 4, "1234567890", "to879798@uaeh.edu.mx", 9}};

int main(){
    char op;
    consola();
    cout << endl << "|----------- ARREGLOS DE ESTRUCTURAS -----------|" << endl;
    cout << endl << "\t|----------- MENU -----------|" << endl;
    cout << "\t V) Mostrar la información" << endl;
    cout << "\t N) Buscar por nombre" << endl;
    cout << "\t T) Buscar por número telefónico" << endl;
    cout << "\t C) Buscar por número de cuenta" << endl;
    cout << "\t Q) Salir" << endl;
    cin >> op;
    switch(op){
        case 'v': case 'V':
            cout << endl << "|----------- MOSTRANDO INFORMACION -----------|" << endl;
            ver_info_arr(lcc);
            break;
        case 'n': case 'N':
            char b_nom[50];
            cout << endl << "|----------- BUSCAR POR NOMBRE -----------|" << endl;
            cin.clear(); cin.ignore();
            cout << endl << "   -> Ingresa el nombre que vamos a buscar: ";
            cin.getline(b_nom, 50);
            busca_nombre(b_nom, lcc);
            break;
        case 't': case 'T':
            char b_tel[15];
            cout << endl << "|----------- BUSCAR POR NUMERO TELEFONICO -----------|" << endl;
            cin.clear(); cin.ignore();
            cout << endl << "   -> Ingresa el número telefónico: ";
            cin.getline(b_tel, 15);
            busca_telefono(b_tel, lcc);
            break;
        case 'c': case 'C':
            int b_cuenta;
            cout << endl << "|----------- BUSCAR POR NUMERO DE CUENTA -----------|" << endl;
            cin.clear(); cin.ignore();
            cout << endl << "   -> Ingresa el número de cuenta: ";
            cin >> b_cuenta;
            busca_ncuenta(b_cuenta, lcc);
            break;
        case 'q': case 'Q':
            consola();
            cout << "Adius :D" << endl;
            exit(-1);
            break;
        default:
            cout << endl << " La opción no es válida..." << endl;
            break;
    }
    return 0;
}

void ver_info_arr(struct Alumno2 lcc[5]){
    consola();

    for(int i = 0; i < 5; i++){
        cout << "|------------- Registro No. " << i << " -------------|" << endl;
        cout << "\t No. de Cuenta: " << lcc[i].ncuenta2 << endl;
        cout << "\t Nombre: " << lcc[i].nombre2 << endl;
        cout << "\t Fecha de ingreso: " << lcc[i].fecha_ing << endl;
        cout << "\t Semestre: " << lcc[i].sem2 << endl;
        cout << "\t Grupo: " << lcc[i].gpo2 << endl;
        cout << "\t Número de telefono: " << lcc[i].telefono << endl;
        cout << "\t Correo: " << lcc[i].correo << endl;
        cout << "\t Número asignado: " << lcc[i].num_asig << endl;
    }
}

void busca_nombre(char b_nom[50], struct Alumno2 lcc[50]){
    char  aux_nom[50]; bool ba;
    strcpy(aux_nom, b_nom);

    for(int j = 0; j < 5; j++){
        if(strncmp(aux_nom, lcc[j].nombre2, 4) == 0){
            ba =  true;
            cout << "\t Nombre: " << lcc[j].nombre2 << endl;
            cout << "\t Semestre: " << lcc[j].sem2 << endl;
            cout << "\t Grupo: " << lcc[j].gpo2 << endl;
            cout << "\t Número de telefono: " << lcc[j].telefono << endl;
            cout << "\t Correo: " << lcc[j].correo << endl;
            cout << "\t Número asignado: " << lcc[j].num_asig << endl;
            break;
        } else {
            ba =  false;
        }
    }
    if(ba == false){
        cout << endl << "   -> El nombre que ingresaste no existe..." << endl;
    } else {
        cout << endl << "   -> Registro encontrado..." << endl;
    }
}

void busca_telefono(char b_tel[15], struct Alumno2 lcc[15]){
    char  aux_tel[15]; bool ba;
    strcpy(aux_tel, b_tel);

    for(int k = 0; k < 5; k++){
        if(strncmp(aux_tel, lcc[k].telefono, 4) == 0){
            ba =  true;
            cout << "\t Nombre: " << lcc[k].nombre2 << endl;
            cout << "\t Semestre: " << lcc[k].sem2 << endl;
            cout << "\t Grupo: " << lcc[k].gpo2 << endl;
            cout << "\t Número de telefono: " << lcc[k].telefono << endl;
            cout << "\t Correo: " << lcc[k].correo << endl;
            cout << "\t Número asignado: " << lcc[k].num_asig << endl;
            break;
        } else {
            ba =  false;
        }
    }
    if(ba == false){
        cout << endl << "   -> El número de telefono que ingresaste no existe..." << endl;
    } else {
        cout << endl << "   -> Registro encontrado..." << endl;
    }
}

void busca_ncuenta(int b_cuenta, struct Alumno2 lcc[10]){
    bool ba;

    for(int l = 0; l < 5; l++){
        if(lcc[l].ncuenta2 == b_cuenta){
            ba =  true;
            cout << "\t Nombre: " << lcc[l].nombre2 << endl;
            cout << "\t Semestre: " << lcc[l].sem2 << endl;
            cout << "\t Grupo: " << lcc[l].gpo2 << endl;
            cout << "\t Número de telefono: " << lcc[l].telefono << endl;
            cout << "\t Correo: " << lcc[l].correo << endl;
            cout << "\t Número asignado: " << lcc[l].num_asig << endl;
            break;
        } else {
            ba =  false;
        }
    }
    if(ba == false){
        cout << endl << "   -> El número de cuenta que ingresaste no existe..." << endl;
    } else {
        cout << endl << "   -> Registro encontrado..." << endl;
    }
}

