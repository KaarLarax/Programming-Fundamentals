
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale>
#include <stdlib.h>

void Cconfig(void);
void conv_minus(char signo_zodiacal[35]);
void tu_signo(char signo_zodiacal[35]);
void edad_persona (char X[45], char Y[35], int Z);

using namespace std;

int main()
{
    string cadena;
    char name[45], signo_zodiacal[35], resp;
    int l, edad;

    Cconfig();
    cout << "Funciones usando cadenas" << endl;

    puts("Teclea un mensaje de bienvenida, por favor...");
    cin >> cadena;
    cout << endl;

    puts("Publicando tu mensaje...");
    cout << cadena << endl;

    cout << endl << endl;
    puts("Vamos a medir tu nombre... :)"); cout << endl;
    fflush(stdin);
    puts("Ingresa tu nombre completo con todo y apellidos"); cout << endl;
    cin.getline(name,45);
    cout << endl;
    l = strlen(name);
    cout << "La longitud de tu nombre es " << l << endl;
    if (l < 30)
    {
        cout << "Tu nombre es pequeño" << endl;
    }
        else
        {
         cout << "Tu nombre es largo" << endl;
        }
    cout << endl << endl;
    cout << "Conoce las caracteristicas de acuerdo a tu signo zodiacal" << endl;
    puts("Ingresa tu signo zodiacal: ");
    cin.getline(signo_zodiacal,35);
    cout<<endl;
    conv_minus(signo_zodiacal);
    tu_signo(signo_zodiacal);
    cout << endl << endl;
    cout << "Ingresa tu edad: " << endl;
    cin >> edad;
    if(cin.fail() || edad < 0)
    {
        cout << "Edad invalida" << endl;
        exit(-1);
    }
    edad_persona(name, signo_zodiacal, edad);


}

void tu_signo(char signo_zodiacal[35])
{
///strcmp= string compare

if(strcmp(signo_zodiacal,"aries") == 0)
{
    puts("Los Aries son, de todos los signos, los que más cómodos se sienten comenzando nuevos proyectos.");
    cout << endl;
    puts("Por su forma de actuar arrebatada, a veces pueden resultar algo tercas e incluso agresivas.");
    cout << endl;
}
    else if(strcmp(signo_zodiacal,"tauro") == 0)
    {
        puts(" Los nacidos bajo este signo no se andan con chiquitas,");
        puts(" lo suyo no son las aventuras y los romances breves: sólo se conformarán con su alma gemela.");
        cout << endl;
    }
        else if(strcmp(signo_zodiacal,"geminis") == 0)
            {
            puts(" ingeniosas, inteligentes, generosas, independientes, creativas, vitales, con mucha capacidad de resiliencia");
            cout<<endl;
            puts("pueden sufrir cambios de humor ademÃ¡s de caer facilmente en continuas contradicciones");
            cout<<endl;
        }
            else if(strcmp(signo_zodiacal,"cancer") == 0)
            {
                puts(" la lealtad, la simpatia, la intuicia, la creatividad, la necesidad de proteger y la sensibilidad");
                cout << endl;
                puts("Pueden ser celosas, inseguras, desconfiadas, muy golosas e incluso introvertidas");
                cout << endl;
            }
                else if(strcmp(signo_zodiacal,"leo") == 0)
                {
                    puts(" fiel, bondadoso, optimista, generoso y extrovertido");
                    cout << endl;
                    puts(" son idealistas, inteligentes, tercos, un poco arrogantes, orgullosos y pueden tener mal humor");
                    cout << endl;
                }
                    else if(strcmp(signo_zodiacal,"virgo") == 0)
                    {
                        puts(" son serios, cautos, disciplinados, meticulosas y analiticos");
                        cout << endl;
                        puts(" tienen un gran sentido de la responsabilidad y de la amistad");
                        cout << endl;
                    }
                        else if(strcmp(signo_zodiacal,"libra") == 0)
                        {
                            puts(" suelen definirse como idealistas, sociales y diplomaticos");
                            cout << endl;
                            puts("odian que se les contradiga, aunque en ocasiones no son capaces de enfrentarse a los demas");
                            cout << endl;
                        }
                            else if(strcmp(signo_zodiacal,"escorpio") == 0)
                            {
                                puts(" llega a ser posesivo y testarudo");
                                cout << endl;
                            }
                                else if(strcmp(signo_zodiacal,"sagitario") == 0)
                                {
                                    puts(" se caracteriza por la empatia, la comprension, la necesidad de vivir aventuras y sentirse libre");
                                    cout << endl;
                                    puts("los Sagitario tambien pueden ser impacientes");
                                    cout << endl;
                                }
                                    else if(strcmp(signo_zodiacal,"capricornio") == 0)
                                    {
                                        puts(" sus caracterÃ­sticas son el trabajo duro, la fiabilidad, la prudencia, la practicidad, la ambicion y la justicia ");
                                        cout << endl;
                                        puts("la melancolia y el pesimismo pueden ser sus dos grandes enemigos para alcanzar la felicidad");
                                        cout << endl;
                                    }
                                        else if(strcmp(signo_zodiacal,"acuario") == 0)
                                        {
                                            puts(" son simpaticos, divertidos, originales, idealistas y con sentido del humor");
                                            cout << endl;
                                            puts("soñadores, imaginativos, honestos, leales, tolerantes y sin prejuicios");
                                            cout << endl;
                                        }
                                            else if(strcmp(signo_zodiacal,"piscis") == 0)
                                            {
                                                puts(" son creativios,tienen imaginacion,sensibles, amables, intituitivos, empaticos, pacientes y con facilidad para soñar");
                                                cout << endl;
                                                puts("suelen ser personas tranquilas, evitan meterse en problemas e incluso les cuesta rebelarse ante algunas injusticias");
                                                cout << endl;
                                            }
                                                else
                                                {
                                                    cout << "El signo no existe" << endl;
                                                }
}


void conv_minus(char signo_zodiacal[35])
{
    for (int i=0; i<strlen(signo_zodiacal);i++)
        {
            signo_zodiacal[i]=tolower(signo_zodiacal[i]);
            cout<<signo_zodiacal[i];
        }
}

void edad_persona (char X[45], char Y[35], int Z)
{
 cout << "Usuario: " << X << "\n" << "Signo Zodiacal: " << Y << "\n" << "Edad: " << Z << endl;
 if(Z <= 12)
 {
     cout << "Te encuentras en la niñez \n";
     cout << "Te recomiendo Leer" << endl;
 }
     else if(Z > 12 && Z < 18)
     {
         cout << "Te encunetras en la adolesencia \n";
         cout << "Deberias hacer deporte" << endl;
     }
        else if(Z > 17 && Z < 33)
        {
            cout << "Te encuentras en la adultez" << endl;
        }
            else if(Z > 33 && Z < 57)
            {
                cout << "Te encuentras en la adultez madura" << endl;
            }
                else if(Z > 57 && Z < 100)
                {
                    cout << "Te encuentras en la vejez" << endl;
                }
                else
                {
                    cout << "No se porque estas vivo xd" << endl;
                }

}

void Cconfig (void)
{
    setlocale(LC_CTYPE,"Spanish"); // Cambia el idioma en español
    system("cls"); // Limpia la consola
    system("color 0B"); // Cambia el color a cyan
}
