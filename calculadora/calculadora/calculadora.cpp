// calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()

{
    int numeros[3] = {0,0,0};
    string names[3] = {"","",""};
    char opcion = ' ';
    char continuar;
    int buscnum;
    string buscnam;
    int contactos;

    while (opcion != 'S') {

        cout << "hola";
        system("cls");

        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ".- ";
            cout << names[i];
            if (numeros[i] == 0) {
                cout << "" << endl;
            }
            else {
                cout <<" | "<<numeros[i] << endl;
            }

        }
        cout << "" << endl;
        cout << "A.- Agregar" << endl;
        cout << "B.- Buscar" << endl;
        cout << "M.- Modificar" << endl;
        cout << "X.- Borrar" << endl;
        cout << "S.- Salir" << endl;

        cin >> opcion;

        contactos = 0;
        for (int i = 0; i < 3; i++)
        {
            if (names[i] != "") {
                contactos = contactos + 1;
            }
        }

        switch (opcion)
        {
        case 'A':
            if (contactos >= 3) {
                cout << "ya no puedes agregar mas contactos" << endl;
                cout << "(escriba cualquier cosa para continuar)" << endl;
                cin >> continuar;
            }
            else {
                cout << "nombre del contacto: ";
                for (int i = 0; i < 3; i++)
                {
                    if (names[i] == "") {
                        cin >> names[i];
                        break;
                    }
                }
                cout << "numero del contacto: ";
                for (int i = 0; i < 3; i++)
                {
                    if (numeros[i] == 0) {
                        cin >> numeros[i];
                        break;
                    }
                }
            }
            break;
        case 'B':
            if (contactos < 1) {
                cout << "no hay contactos que buscar" << endl;
                cout << "(escriba cualquier cosa para continuar)" << endl;
                cin >> continuar;
            }
            else {
                contactos = 0;
                while (opcion != '1' && opcion != '2') {
                    system("cls");
                    cout << "que quiere buscar?" << endl;
                    cout << "1.-Nombre 2.-Numero" << endl;
                    cin >> opcion;
                    if (opcion == '1') {
                        cout << "nombre: ";
                        cin >> buscnam;
                        for (int i = 0; i < 3; i++)
                        {
                            if (names[i] == buscnam) {
                                cout << i+1<< ".- ";
                                cout << names[i]<< " | ";
                                cout << numeros[i] << endl;
                                contactos = contactos + 1;
                            }
                        }
                    }
                    else if (opcion == '2') {
                        cout << "numero: ";
                        cin >> buscnum;
                        for (int i = 0; i < 3; i++)
                        {
                            if (numeros[i] == buscnum) {
                                cout << i+1<< ".- ";
                                cout << names[i]<< " | ";
                                cout << numeros[i] << endl;
                                contactos = contactos + 1;
                            }
                        }
                    }
                    else {
                        cout << "porfavor ponga una opción valida" << endl;
                    }
                    if (contactos < 1) {
                        cout << "ningun contacto coincide con la busqueda" << endl;
                    }
                    cout << "(escriba cualquier cosa para continuar)" << endl;
                    cin >> continuar;
                }
            }
            break;
        case 'M':
            if (contactos < 1) {
                cout << "no hay contactos que modificar" << endl;
                cout << "(escriba cualquier cosa para continuar)" << endl;
                cin >> continuar;
            }
            else {
                contactos = 0;
                cout << "que contacto quiere modificar?" << endl;
                cin >> contactos;
                if (names[contactos] == "") {
                    cout << "no hay ningun contacto aqui" << endl;
                }
                else {
                    cout << "nombre del contacto: ";
                            cin >> names[contactos];
                    cout << "numero del contacto: ";
                            cin >> numeros[contactos];
                }
            break;
        case 'X':
            break;
        case 'S':
            break;
        default:
            cout << "porfavor ponga una opción valida, o asegurese de que la letra correspondiente este en mayuscula" << endl;
            cout << "(escriba cualquier cosa para continuar)" << endl;
            cin >> continuar;
            break;
        }

    }
        //agregar, buscar, modificar y borrar.
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
