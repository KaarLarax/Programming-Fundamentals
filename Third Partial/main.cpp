#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

void ident_vocales_cadena(char fra[30]);
void arr_apuntadores(void);
void limpia(void);
using namespace std;

int main()
{
    char fra[30];

    limpia();
    cout << "******************************************" << endl;
    cout << "**********CADENAS Y APUNTADORES***********" << endl;
    cout << "******************************************" << endl;
    cout << "Ingrese la palabra que desea verificar si es vocal: ";
    cin.getline(fra, 30);
    ident_vocales_cadena(fra);
    system("pause");

    limpia();
    arr_apuntadores();
    system("pause");
    return 0;
}

void limpia(void)
{
    system("cls");
    setlocale(LC_CTYPE,"spanish");
    system("color 9");

}

void ident_vocales_cadena(char fra[30])
{
    int c_a=0, c_e=0, c_i=0, c_o=0, c_u=0;
    char *pointer;
    pointer = &fra[0];

    for(int i = 0; i<strlen(fra); i++)
    {
        cout << "posicion: " << i << endl;
        if(*pointer == 'a' || *pointer == 'A')
        {
            c_a++;
            cout << "-----------" << endl;
            cout << "a: " << c_a  << endl;
            cout << "-----------" << endl;
        }
        if(*pointer == 'e' || *pointer == 'E')
        {
            c_e++;
            cout << "-----------" << endl;
            cout << "e: " << c_e  << endl;
            cout << "-----------" << endl;
        }
        if(*pointer == 'i' || *pointer == 'I')
        {
            c_i++;
            cout << "-----------" << endl;
            cout << "i: " << c_i  << endl;
            cout << "-----------" << endl;
        }
        if(*pointer == 'o' || *pointer == 'O')
        {
            c_o++;
            cout << "-----------" << endl;
            cout << "o: " << c_o  << endl;
            cout << "-----------" << endl;
        }
        if(*pointer == 'u' || *pointer == 'U')
        {
            c_u++;
            cout << "-----------" << endl;
            cout << "u: " << c_u  << endl;
            cout << "-----------" << endl;
        }
        pointer++;
    }
    cout << endl << endl;
}

void arr_apuntadores()
{
    bool band;
    char *beatles[]={"JOHN LENON", "PAUL MCCARTNEY", "RINGO STAR", "GEORGE HARRISON"};
    char name_b[25];
    puts("¿Recuerdas el nombre de un beatle? INGRESALO");
    cin.getline(name_b, 25);

    for(int i=0; i<4; i++)
    {
        if(strcmp(name_b, beatles[i]) == 0)
        {
            band = true;
            break;
        }
            else if(strcmp(name_b, beatles[i]) != 0)
            {
                band = false;
            }

    }
    if(band == true)
        {
            cout << endl << endl;
            cout << "Felicidades..." << endl;
            cout << "Tienes buena memoria :)" << endl;
            cout << endl << endl;
        }
        else
            {
                cout << endl << endl;
                cout << "Lastima..." << endl;
                cout << "Tienes mala memoria ;(" << endl;
                cout << endl << endl;
            }

}
