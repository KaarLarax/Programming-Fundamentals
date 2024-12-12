#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <windows.h>

void Palabra_vertical(char x[]);
void es_co_pu(char x[]);
void invertir_arreglo(char x[]);

using namespace std;

int main()
{
    char frase[200];
    setlocale(LC_CTYPE, "spanish"); // cambiar a español el idioma
    SetConsoleCP(1252); // Cambiar STDIN
    SetConsoleOutputCP(1252); // Cambiar STDOUT
    system("color 4");
    cout << "Ingrese una frase que no supere los 200 caracteres: ";
    cin.getline(frase, 200);
    system("pause");
    system("cls");
    system("color 4");
    cout << "Su texto en vertical: " << endl;
    Palabra_vertical(frase);
    system("pause");
    system("cls");
    system("color 3");
    cout << "Deteccion de espacios, comas, puntos: " << endl;
    es_co_pu(frase);
    system("pause");
    system("cls");
    system("color 5");
    cout << "Su frase invertida es: " << endl << endl;
    invertir_arreglo(frase);
    cout << endl;
    return 0;
}

void Palabra_vertical(char x[])
{
    char *ptr;
    ptr = &x[0];
    for (int i=0; i<=strlen(x); i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
}

void es_co_pu(char x[])
{
    int longitud_x=strlen(x);
    vector<int> ves, vco, vpu;
    int es=0, co=0, pu=0;
    char *ptr;
    ptr = &x[0];
    for (int i=0; i<=longitud_x; i++)
    {
        if(*ptr == ' ')
        {

            ves.push_back(i);
            es++;

        }
            else if(*ptr == ',')
            {
                vco.push_back(i);
                co++;

            }
                else if (*ptr == '.')
                {
                    vpu.push_back(i);
                    pu++;
                }
            ptr++;
    }
    cout << "Los espacios se encuentran en las posiciones: " << endl;
    for(int i : ves)
    {
        cout << i << "; ";
    } cout << endl;
    printf("tiene %d espacio(s)\n",es);
    cout << "Las comas se encuentran en las posiciones: " << endl;
    for(int i : vco)
    {
        cout << i << "; ";
    } cout << endl;
    printf("tiene %d coma(s)\n",co);
    cout << "Los puntos se encuentran en las posiciones: " << endl;
    for(int i : vpu)
    {
        cout << i << "; ";
    } cout << endl;
    printf("tiene %d punto(s)\n",pu);
}

void invertir_arreglo(char x[])
{
    char *ptr;
    ptr = &x[strlen(x)-1];
    for (int i=0; i<strlen(x); i++)
    {
        cout << *ptr;
        ptr--;
    }
}
