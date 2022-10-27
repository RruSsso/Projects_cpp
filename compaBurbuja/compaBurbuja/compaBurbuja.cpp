
#include <iostream>
using namespace std;

int main()
{
    int tamano = 5;
    int numero;
    int comparador = 0;
    
    /*
    cout << "De que tamaño quiere su arreglo?" << endl;
    cout << "(no hace falta dejar un espacio extra para el nulo)" << endl;
    cin >> tamano;
    int* arreglo;
    arreglo = new int [tamano];
    for (int i = 0; i < tamano; i++) {
        cout << "Escriba el numero de la posicion #" << i + 1 << endl;
        cin >> arreglo[i];
    }
    */


    //el arreglo siempre cambia y el otro es para conservar el original
    int arreglo[6] = { 3,8,2,6,1 };
    int arregloejem[6] = { 3,8,2,6,1 };
    //lo de arriba sera comentario cuando toque usar arreglos dinamicos

    for (int i = 0; i < tamano; i++) { 
        for (int i2 = 0; i2 < tamano; i2++) {
            comparador = arreglo[i];
            if (i2 != i) {
                if (comparador < arreglo[i2]) {
                    arreglo[i] = arreglo[i2];
                    arreglo[i2] = comparador;
                }
            }  
        }  
    }

    cout << "Burbuja:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << endl;
    }

    //aqui los igualamos
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = arregloejem[i];
    }

    for (int i = 1; i < tamano; i++) {
        
    }






}

