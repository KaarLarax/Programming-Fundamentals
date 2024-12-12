#include <iostream>
#include <stdlib.h>
#include <locale>
#include <windows.h>
#include <string.h>
#include <conio.h>

using namespace std;


float promedio_edades(float edades[6]);
void mostrar_arr1d(float edades[6]);
void mostrar_arr2d(float edad[6][3]);
int aprobados(float calificaciones[6][3]);
int reprobados(float calificaciones[6][3]);
void password();
void Salir();

int main()
{
    password();
    float edades[6] = {17.0, 19.0, 21.0, 20.0, 18.0, 22.0};
    float edad[6][3] =  {{10.0, 10.0},
                        {10, 8, 5.0},
                        {5.0, 7.0, 6.0},
                        {1.0, 7.0, 8.0},
                        {1.0, 4.0, 3.0},
                        {5.0, 3.0, 9.0}};

    float calificaciones[6][3] = {{10.0, 10.0},
                                 {10, 8, 5.0},
                                 {5.0, 7.0, 6.0},
                                 {1.0, 7.0, 8.0},
                                 {1.0, 4.0, 3.0},
                                 {5.0, 3.0, 9.0}};

    float prom, num_ac, num_na;

    do
    {
        cout << "\t";
        mostrar_arr1d(edades);
        cout << endl << endl << endl;
        system("pause");
        cout << endl << endl << endl;
        prom = promedio_edades(edades);
        cout << "\t" << "La edad promedio es :" << prom << endl;
        cout << endl;
        system("pause");

        system("cls");

        Sleep(1000);
        cout << endl;
        cout << "\t" << "Mostrando en la tabla de mis calificaciones" << endl;
        mostrar_arr2d(calificaciones);
        cout << endl;
         num_ac = aprobados(calificaciones);
        cout << "\t" << "Número de calificaciones acreditadas: " << num_ac << endl;
         num_na = reprobados(calificaciones);
        cout << "\t" << "Numero de calificaciones reprobatorias: " << num_na << endl;
        cout << endl;


    } while(true);
    return 0;
}

void password (void)
{
    char pass[15]={"Donnie Darko"};
    char magicword[15];

    cout << "Ingrese la contraseña "; cin.getline(magicword,13);
    if (strcmp(pass,magicword) == 0)
    {
        cout << "Contraseña correcta" << endl;
        cout << "Bienvenido" << endl << endl;
        Sleep(1000);
    }
    else
    {
        cout << "Contraseña incorrecta" << endl;
        exit(-1);
    }
}

float promedio_edades(float edades[6])
{
    float s = 0.0, p;
    for(int i = 0; i < 6; i++)
    {
        s += edades[i];
    }
    p = s/6.0;
    return p;
}

void Salir (void)
{
  system("color 0F");///Cambia el color a blanco
  cout << "Saliendo..." << endl;
  system ("pause");
  exit(-1);
}

void mostrar_arr1d(float edades[6])
{
    cout << endl;
    for(int i = 0; i < 6; i++)
    {
        cout << edades[i] << "\t";
    }
}

void mostrar_arr2d(float calificaciones[6][3])
{
    cout << endl;
    cout << "  1er Par.  |   2do Par.  |  3er Par.  " << endl;
    cout << "---------------------------------------" << endl;
    for(int i=0;i<6;i++){
            for(int j=0; j<3; j++){
            cout << "    " << calificaciones[i][j];
            cout <<"\t\t";
            }
        cout << endl;
    }
}

int aprobados(float calificaciones[6][3])
{
    int AC = 0;
    for(int fil = 0; fil < 6; fil++)
    {
        for(int col = 0; col < 3; col++)
        {
            if((calificaciones[fil][col] >= 7.0) && (calificaciones[fil][col] <= 10.0))
            {
                AC++;
            }
        }
    }

    return AC;
}

int reprobados(float calificaciones[6][3])
{
    int AR = 0;
    for(int fil = 0; fil < 6; fil++)
    {
        for(int col = 0; col < 3; col++)
        {
            if((calificaciones[fil][col] <= 6.9))
            {
                AR++;
            }
        }
    }

    return AR;
}

