#ifndef MIPRIMERALIBRERIA_H_INCLUDED
#define MIPRIMERALIBRERIA_H_INCLUDED

using namespace std;

// Mis propias funciones

const HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

void Cconfig();
void password();
void portada();
bool askretorno();
void genere_tiempo();

void password (void)
{

    char pass[15]={"Donnie Darko"}; // Varible de cadena que se comparara con la variable magicword
    char magicword[15]; // Variable que almacena la cadena de caracteres por console input
    int conpass = 3;

    Cconfig();

    while(true)
    {
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
            break;
        }
            else // Si las cadenas no son identicas el programa se cierra
            {
                SetConsoleTextAttribute(hConsole, 8);
                cout << "\t\t" << "Contraseña incorrecta" << endl;

                conpass --;
                if (conpass <= 0)
                {
                    cout << "\t\t" << "Numero de intentos superados" << endl;
                    exit(-1);
                }
                cout << "\t\t" << "Numero de intentos: " << conpass << endl;
                genere_tiempo();
                system("cls");
            }
    }
}

bool askretorno(void)
{
    char askreturn;
    SetConsoleTextAttribute(hConsole, 9);
    cout << "\t\t" << "¿Usted desea reiniciar el progrma?" << endl;
    cout << "\t\t" << "Ingrese S para hacerlo" << endl;
    fflush(stdin);
    cout << "\t\t"; cin >> askreturn;
    if (askreturn == 's' || askreturn == 'S')
    {
        cout << "\t\t" << "Regresando" << endl;
        return true;
        genere_tiempo();
    }
        else
        {
            cout << "\t\t" << "Saliendo..." << endl;
            return false;

        }
}


void portada(void)
{
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
system("cls");
}

void genere_tiempo(void) // hacer un delay propio
{
    for(int i=0;i<30111;i++)
        { //for externo
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

int askmenu()
{
    char x;

    cout << "\t\t" << "Seleccione una opcion... ";
    SetConsoleTextAttribute(hConsole, 12); // Cambia de color el texto a rojo claro
    fflush(stdin);
    cout << "\t\t"; cin >> x;
    SetConsoleTextAttribute(hConsole, 10); // Vuelve a cambiar de color el texto a verde
    if (cin.fail())
    {
        fflush(stdin);
        return 0;
    }
    else
    {
        return x;
    }
}



#endif // MIPRIMERALIBRERIA_H_INCLUDED
