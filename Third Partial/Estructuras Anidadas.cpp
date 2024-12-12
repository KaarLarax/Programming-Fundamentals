#include <iostream>
#include <string.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

void ver_info_arr(struct Album favoritos[5]);
void busca_info(struct Album Favoritos[5]);
void busca_nombre(char nomb[40], struct Album Favoritos[5]);

using namespace std;

struct Album{
int anio_lanza;
char nombre_disco[50];
char interprete[20];
int canciones;
int videos;
float precio;
struct info{ // Estructura anidada
    char nombre_empresa[60];
    char genero_musical[60];
}disco;
}favoritos[5]={{2020, "Nectar", "Joji", 18, 18, 500.00,{"88Rising", "Rhythm and blues"}},
               {2011, "Floral Shoppe", "Macintosh Plus", 11, 0, 100.00,{"Beer on the Rug", "Vaporwave"}},
               {2005,"Demon Days","Gorillaz",15,3,200.00,{"Parlophone Records Ltd.","Alternative/Indie,R&B/Soul,Hip-Hop/Rap"}},
               {2004,"Three Cheers for Sweet Revenge","My Chemical Romace",13,2,250.00,{"Reprise Records for the US.","Alternative/Indie-Emo-Rock"}},
               {2019,"Show tracks","cmd",2,0,100.0,{"owsla","dubstep"}}};

int main()
{
    setlocale(LC_CTYPE,"Spanish"); /// Cambia el idioma en español
    system("cls");/// Limpia la consola
    system("color 0B");/// Cambia el color a cyan
    ver_info_arr(favoritos);
    busca_info(favoritos);
    return 0;
}

void ver_info_arr(struct Album favoritos[5])
{
    for(int i=0; i<5; i++){
        system("cls");
        cout << endl << endl;
        cout << "\t" << "Mostrando la informacion de los album... " << endl << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "\t" << "Año de lanzamiento: " << favoritos[i].anio_lanza << endl;
        cout << "\t" << "Interprete: " << favoritos[i].interprete << endl;
        cout << "\t" << "Nombre del album: " << favoritos[i].nombre_disco << endl;
        cout << "\t" << "Numero de canciones: " << favoritos[i].canciones << endl;
        cout << "\t" << "Numero de videos: " << favoritos[i].videos << endl;
        cout << "\t" << "Nombre de la empresa: " << favoritos[i].disco.nombre_empresa << endl;
        cout << "\t" << "Genero musical: " << favoritos[i].disco.genero_musical << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;
        system("pause");
    }
}
void busca_info(struct Album favoritos[5])
{
    int year; bool band;
    cout << "Ingrese el año de lanzamiento que quiere buscar: ";
    fflush(stdin);
    cin >> year; cout << endl << endl;
    for(int i=0; i<5; i++){
        if(year == favoritos[i].anio_lanza){
            cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
            cout << "\t" << "Año de lanzamiento: " << favoritos[i].anio_lanza << endl;
            cout << "\t" << "Interprete: " << favoritos[i].interprete << endl;
            cout << "\t" << "Nombre del album: " << favoritos[i].nombre_disco << endl;
            cout << "\t" << "Numero de canciones: " << favoritos[i].canciones << endl;
            cout << "\t" << "Numero de videos: " << favoritos[i].videos << endl;
            cout << "\t" << "Nombre de la empresa: " << favoritos[i].disco.nombre_empresa << endl;
            cout << "\t" << "Genero musical: " << favoritos[i].disco.genero_musical << endl;
            cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
            system("pause");
            band = 1; //Si se tiene exito

        }

    }
}
