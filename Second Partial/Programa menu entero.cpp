#include <iostream>
#include <stdlib.h>
#include <locale>
#include <windows.h>
#include <string.h>
#include <conio.h>

using namespace std;

void password();
void menu();
void Salir();
double Cms_Plg(double);
double metros_ft(double);
bool askretorno();
const HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

int main()
{
    setlocale(LC_CTYPE, "spanish");
    password();
    menu();

    return 0; // Retorna el valor 0 para terminar el programa
}

void password (void)
{
    char pass[15]={"Donnie Darko"}; // Varible de cadena que se comparara con la variable magicword
    char magicword[15]; // Variable que almacena la cadena de caracteres por console input

        SetConsoleTextAttribute(hConsole, 9); // Cambia de color el texto a azul oscuro
        cout << "\t\t" << "Ingrese la contraseña ";
        SetConsoleTextAttribute(hConsole, 12); // Cambia de color el texto a rojo claro
        cin.getline(magicword,13);
        if (strcmp(pass,magicword) == 0) //compara las variables que almacenan cadenas para saber si son identicas
        {
            SetConsoleTextAttribute(hConsole, 9);
            cout << "\t\t" << "Contraseña correcta" << endl;
            SetConsoleTextAttribute(hConsole, 5);
            cout << "\t\t" << "Bienvenido" << endl << endl;
            Sleep(1000);

        }
        else // Si las cadenas no son identicas el programa se cierra
        {
            SetConsoleTextAttribute(hConsole, 8);
            cout << "\t\t" << "Contrase�a incorrecta" << endl;
        }

}

void menu (void) // Men� Principal
{
    bool band;
    int opcion; // Variables del men�/switch
    double metro, cms; // Variables del menu longitudes de las opciones
    do
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, 13); // cambia de color el texto a morado claro
        cout << "\t\t" << "+-----------------------------------------------------+" << endl;
        cout << "\t\t" << "|---------|| LARA HERNANDEZ CARLOS ALBERTO||----------|" << endl;
        cout << "\t\t" << "+---------++----++------------------++----++----------+" << endl;
        cout << "\t\t" << "|---------------|| MENU DE OPCIONES ||----------------|" << endl;
        cout << "\t\t" << "+----------++---++------------------++---++-----------+" << endl;
        cout << "\t\t" << "|----------|| 1) UNIDADES DE LONGITUD    ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| 2) UNIDADES DE MASA        ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| 3) SALIR                   ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
        cout << "\t\t" << " Seleccione una opcion... ";
        SetConsoleTextAttribute(hConsole, 12); // Cambia de color el texto a rojo claro
        fflush(stdin);
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                system("cls"); // Limpia la consola
                SetConsoleTextAttribute(hConsole, 10); // Cambia de color el texto a verde
                cout << "\t\t" << "+-----------------------------------------------------+" << endl;
                cout << "\t\t" << "|---------------|| MENU DE OPCIONES ||----------------|" << endl;
                cout << "\t\t" << "+----------++---++------------------++---++-----------+" << endl;
                cout << "\t\t" << "|----------|| 1) CM --> INCH             ||-----------|" << endl;
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
                cout << "\t\t" << "|----------|| 2) MT --> FT               ||-----------|" << endl;
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
                cout << "\t\t" << "|----------|| 3) KM -- > MI              ||-----------|" << endl;
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
                cout << "\t\t" << "|----------|| 4) SALIR                   ||-----------|" << endl;
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
                cout << "\t\t" << "|----------|| 5) MENU PRINCIPAL          ||-----------|" << endl;
                cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
                cout << "\t\t" << " Seleccione una opcion... ";
                SetConsoleTextAttribute(hConsole, 12); // Cambia de color el texto a rojo claro
                cin >> opcion;
                SetConsoleTextAttribute(hConsole, 10); // Vuelve a cambiar de color el texto a verde
                switch (opcion)
                {

                    case 1:
                        system("cls"); // Limpia la consola
                        SetConsoleTextAttribute(hConsole, 11); // Cambia el color del texto a agua marina claro
                        cout << "\t\t" << "+------------------------------------------------+" << endl;
                        cout << "\t\t" << "|---------------|| CMS --> PLG ||----------------|" << endl;
                        cout << "\t\t" << "+---------------++-------------++----------------+" << endl;
                        cout << "\t\t" << "Ingrese los centimetros que desea convertir: ";
                        SetConsoleTextAttribute(hConsole, 12);
                        cin >> cms;
                        SetConsoleTextAttribute(hConsole, 11);
                        if(cin.fail() || (cms <= 0))
                        {
                            cout << "\t\t" << "Centimetros invalidos" << endl;
                        }
                            else
                            {
                                cout << "\t\t" << cms << " centimetros en pulgadas son: ";
                                SetConsoleTextAttribute(hConsole, 12);
                                cout << Cms_Plg(cms) << endl;
                            }
                        SetConsoleTextAttribute(hConsole, 11);
                    break;
                    case 2:
                        system("cls");
                        SetConsoleTextAttribute(hConsole, 11);
                        cout << "\t\t" << "+------------------------------------------------+" << endl;
                        cout << "\t\t" << "|---------------|| MTS --> FT  ||----------------|" << endl;
                        cout << "\t\t" << "+---------------++-------------++----------------+" << endl;
                        cout << "\t\t" << "Ingrese los metros que desea convertir: ";
                        SetConsoleTextAttribute(hConsole, 12);
                        cin >> metro;
                        SetConsoleTextAttribute(hConsole, 11);
                        if(cin.fail() || (metro <= 0)) // Si los valores ingresados son invalidos
                        {
                            cout << "\t\t" << "metros invalidos" << endl;
                        }
                            else
                            {
                                cout << "\t\t" << metro << " metros en pies son: ";
                                SetConsoleTextAttribute(hConsole, 12);
                                cout << metros_ft(metro) << endl;
                            }
                        SetConsoleTextAttribute(hConsole, 11);

                    break;
                    case 4:
                        Salir();
                    break;
                    case 5: // Ir al men� principal
                    break;

                    default: // S� la opcion no se encuentra en el menu
                        system("color 08"); /// Cambia el color a gris
                        cout << "\t\t" << "ingreso una opcion que no se encuentra en el menu" << endl;
                        cout << "\t\t" << "El programa se cerrara"<< endl;
                    break;
                }
            break;

            case 3: // s� el usuario desea salir del programa
                Salir();
            default: // Si la opcion es incorrecta
                system("color 08"); /// Cambia el color a gris
                cout << "\t\t" << "ingreso una opcion que no se encuentra en el menu" << endl;
                cout << "\t\t" << "El programa se cerrara"<< endl;
            break;
        }
    }while(askretorno() == true);
}

double Cms_Plg(double x)
{
    return(x / 2.54);
}

double metros_ft(double x)
{
    return(x * 3.281);
}

void Salir (void)
{
  system("color 08");///Cambia el color a gri
  cout << "\t\t" << "Saliendo..." << endl;
  system ("pause");
  exit(-1);
}

bool askretorno(void)
{
    char askreturn;
    cout << "\t\t" << "¿Usted desea reiniciar el progrma? \n\t\t Ingrese S para hacerlo" << endl;
    fflush(stdin);
    cin >> askreturn;
    if (askreturn == 's' || askreturn == 'S')
    {
        cout << "Holita";
        return true;
    }
        else
        {
            return false;
        }
}
