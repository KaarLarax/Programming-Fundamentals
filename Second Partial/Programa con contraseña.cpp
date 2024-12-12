///*****************************************************************************************************************
/// Librerias

#include <iostream>
#include <stdlib.h>
#include <locale>
#include <windows.h>
#include <string.h>
#include <conio.h>

///*****************************************************************************************************************

using namespace std;

/// Prototipos de funciones

void password(void);
void portada(void);
void Cconfig(void);
void genere_tiempo(void);
void Menu_completo(void);
void Menu(void);
void Regresar_Menu(void);
void Rectangulo_caracteres(void);
void Triangulo_caracteres(void);
void Triangulo_letras(void);
void Triangulo_numeros(void);
void Triangulo_abecedario(void);
void Salir(void);

///*****************************************************************************************************************
/// Variables
int opcion, asci=97, var=49;
    char resp, x;
///*****************************************************************************************************************
int main() /// Inicia el programa
{
    Cconfig();
///*****************************************************************************************************************
    password();
///*****************************************************************************************************************
    portada();
///*****************************************************************************************************************
    Menu_completo();
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
        genere_tiempo();
    }
    else
    {
        cout << "Contraseña incorrecta" << endl;
        exit(-1);
    }
}

void portada(void)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t" << " :::    :::     :::     :::::::::: :::    ::: " << endl;
cout << "\t\t" << " :+:    :+:   :+: :+:   :+:        :+:    :+: " << endl;
cout << "\t\t" << " +:+    +:+  +:+   +:+  +:+        +:+    +:+ " << endl;
cout << "\t\t" << " +#+    +:+ +#++:++#++: +#++:++#   +#++:++#++ " << endl;
cout << "\t\t" << " +#+    +#+ +#+     +#+ +#+        +#+    +#+ " << endl;
cout << "\t\t" << " #+#    #+# #+#     #+# #+#        #+#    #+# " << endl;
cout << "\t\t" << "  ########  ###     ### ########## ###    ### " << endl << endl;
SetConsoleTextAttribute(hConsole, 12);
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| INSTITUTO DE CIENCIAS BASICAS E INGENIERIA  |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| LICENCIATURA EN CIENCIAS COMPUTACIONALES    |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| CARLOS ALBERTO LARA HERNANDEZ               |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| SEMESTRE: 1          GRUPO: 1               |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "| NO.DE CUENTA: 476759                        |" << endl;
cout << "\t\t" << "+---------------------------------------------+" << endl;
cout << "\t\t" << "Presione cualquier tecla para continuar...    "; getch();///lee el teclado
genere_tiempo();

}

void genere_tiempo(void)/// hacer un delay propio
{
    for(int i=0;i<30111;i++)
        {///for externo
        for(int j=0;j<30000;j++)
            {}
        }
}

void Cconfig (void)
{
    setlocale(LC_CTYPE,"Spanish"); /// Cambia el idioma en español
    system("cls");/// Limpia la consola
    system("color 0B");/// Cambia el color a cyan
}

void Menu_completo (void)
{
    system("cls");
    Menu();
/// Selecciones del menu ( subprogramas )
    switch (opcion)
    {
        case 1: /// Rectangulo generado con #
            Rectangulo_caracteres();
            break; /// termina la opcion numero 1 (Rectangulo generado con #)
        ///+++++++++++++++++++++++++++++++++++
        case 2: /// Triangulo generado con #
            Triangulo_caracteres();
        break; /// Termina la opcion numero 2 (Triangulo generado con #)
        ///+++++++++++++++++++++++++++++++++++
        case 3: /// Triangulo generado con letras
            Triangulo_letras();
            break;/// termina la opcion numero 3 (Triangulo generado con letras)
        ///+++++++++++++++++++++++++++++++++++
        case 4: /// Triangulo generado con numeros
            Triangulo_numeros();
            break; /// termina la opcion numero 4 (Triangulo generado con numeros)
        ///+++++++++++++++++++++++++++++++++++
        case 5: /// Triangulo generado con el abecedario
            Triangulo_abecedario();
            break; /// termina la opcion numero 5 (Triangulo generado con abecedario)
        ///+++++++++++++++++++++++++++++++++++
        case 6: /// Salir del programa
            Salir();
            break; /// termina la opcion numero 5 (Cerrar programa)
        ///+++++++++++++++++++++++++++++++++++
        default: /// Si presiona una tecla erronea o falla la entrada
            system("color 08"); /// Cambia el color a gris
            cout << "Ingreso incorrectamente la respuesta..." << endl;
            cout << "El programa se cerrara..." << endl;
            break; /// termina la opcion numero 4 (falla en la entrada)
    }
}

void Menu (void)
{
  /// Menu
    cout << "\t" << "\t" << "+-----------------------------------------------------+" << endl;
    cout << "\t" << "\t" << "+---------++------------------------------++----------+" << endl;
    cout << "\t" << "\t" << "|---------||         FIGURAS LARA         ||----------|" << endl;
    cout << "\t" << "\t" << "+---------++------------------------------++----------+" << endl;
    cout << "\t" << "\t" << "|---------|| LARA HERNANDEZ CARLOS ALBERTO||----------|" << endl;
    cout << "\t" << "\t" << "+---------++----++------------------++----++----------+" << endl;
    cout << "\t" << "\t" << "|---------------|| MENU DE OPCIONES ||----------------|" << endl;
    cout << "\t" << "\t" << "+----------++---++------------------++---++-----------+" << endl;
    cout << "\t" << "\t" << "|----------|| 1) Rectángulo (caracteres) ||-----------|" << endl;
    cout << "\t" << "\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t" << "\t" << "|----------|| 2) Triángulo (caracteres)  ||-----------|" << endl;
    cout << "\t" << "\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t" << "\t" << "|----------|| 3) Triángulo (letras)      ||-----------|" << endl;
    cout << "\t" << "\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t" << "\t" << "|----------|| 4) Triángulo (números)     ||-----------|" << endl;
    cout << "\t" << "\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t" << "\t" << "|----------|| 5) Triángulo (abecedario)  ||-----------|" << endl;
    cout << "\t" << "\t" << "+----------++----------------------------++-----------+" << endl;
    cout << "\t" << "\t" << "|----------|| 6) salir (cerrar programa) ||-----------|" << endl;
    cout << "\t" << "\t" << "+----------++----------------------------++-----------+" << endl << endl;
    cout << "\t" << "\t" << " Seleccione una opcion... ";
    cin >> opcion;
}

void Regresar_Menu (void)
{
  char regresar;

  system("pause");
  system("cls");
  cout << "¿Usted desea regresar al menu principal? " << endl;
  cout << "Presione la letra S" << endl;
  cin >> regresar;
  if (regresar == 'S' || regresar == 's')
  {
      cout << "regresando al menu principal... " << endl;
      Menu_completo();
  }
    else if ((cin.fail()) || (regresar == 'N') || (regresar == 'n'))
    {
        cout << "El programa se cerrara" << endl;
        exit(-1);
    }
}

void Rectangulo_caracteres (void)
{
  system("cls");
  system("color 0A"); /// Cambia el color a verde claro
  cout << "Rectangulo generado con #" << endl;
  for(int i=1; i<=3; i++)
    {
      for(int j=0; j<5; j++)
      {
        cout << "#";
      }
      cout << endl;
    }
    Regresar_Menu();
}

void Triangulo_caracteres (void)
{
    system("cls");
    system("color 0C"); /// Cambia el color a rojo claro
    cout << "Triangulo generado con #" << endl;
    for(int i=1; i<=6; i++)
    {
        for(int j=0; j<i; j++)
        {
          cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    Regresar_Menu();
}

void Triangulo_letras (void)
{
  system("cls");
  system("color 0D");///Cambia el color a purpura claro
  cout << "Triangulo generado con letras" << endl;
  asci = 97;
  for(int i=1; i<=6; i++)
  {
      for(int j=0; j<=6-i; j++)
          {
            x = asci;
            cout << x;
          }
      asci += 1;
      cout << endl;
    }
  Regresar_Menu();
}

void Triangulo_numeros (void)
{
  system("cls");
  system("color 0E"); /// Cambia el color a amarillo claro
  cout << "Triangulo generado con numeros" << endl;
  var = 49;
  for(int i=1; i<=5; i++)
    {
      for(int j=1; j<=5; j++)
          {
            if (j<i)
            {
            cout << " ";
            }
              else
                {
                  x = var;
                  cout << x;
                }
          }
          var += 1;
          cout << endl;
    }
  Regresar_Menu();
}

void Triangulo_abecedario (void)
{
    system("cls");
    system("color 01"); /// Cambia el color a azul
    cout << "Triangulo generado con el abecedario" << endl;
    for(int i=1; i<=26; i++)
        {
          asci = 97;
          for(int j=1; j<=i; j++)
          {
            x = asci;
            cout << x;
            asci = 97;
            asci += j;
          }
          cout << endl;
        }
    Regresar_Menu();
}

void Salir (void)
{
  system("color 0F");///Cambia el color a blanco
  cout << "Saliendo..." << endl;
  system ("pause");
  exit(-1);
}

