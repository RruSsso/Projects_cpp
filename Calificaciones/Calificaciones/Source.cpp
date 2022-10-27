#include <iostream>
 
using namespace std;
 
const int MAX_ALUMNOS = 100;
const int MAX_CALIF = 10;
 
int main() {
    int notas[MAX_ALUMNOS][MAX_CALIF];
    int i,j,na,nc;
    float calif,prom,suma;
 
    //pedir numero de alumnos y calificaciones
    cout << "Cantidad de estudiantes que quieres calificar: ";
    cin >> na;
    cout << "Numero de materias a las que calificaras: ";
    cin >> nc;
 
    //llenar la matriz
    for (i=0; i<na; i++) {
        cout << "\nAlumno # " << i+1 << ": " << endl;
 
        for (j=0; j<nc; j++) {
            cout << "Calificacion # " << j+1 << ": ";
            cin >> notas[i][j];
        }
 
    }
 
    //promedio de los alumnos
    cout << endl;
    for (i=0; i<na; i++) {
        suma = 0;
 
        for (j=0; j<nc; j++)
            suma = suma + notas[i][j];
 
        prom = suma / nc;
 
        if (prom >= 14)
            cout << "Alumno # "<< i+1 << " Aprobado" << endl;
        else
            cout << "Alumno # " << i+1 << " Desaprobado" << endl;
    }
 
    return 0;
}