// Examen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int main()
{
    //metodo 1
    int suma = 0;
    //metodo 2
    int suma1 = 0;
    int numero1 = 0;
    //metodo 3
    int suma2 = 0;
    int numero2 = 0;
    //metodo 4
    int suma3 = 0;
    int numero3 = 100;
    

                            for (int i = 0; i <= 100; i++)
                            {
                                suma += i;
                                
                            }
    cout <<"metodo 1 : " << suma << "\n";
                            do {
                                
                                suma1 += numero1;
                                
                                numero1 += 1;
                            } while (numero1 <= 100);
    cout <<"metodo 2 : " <<suma1 << "\n";

                             while (numero2 <= 100)
                             {
                                 suma2 += numero2;
                                 
                                 numero2 += 1;
                             }
   cout << "metodo 3 : " << suma2 << "\n";


                               suma3 =(numero3 *(numero3 + 1)) / 2;

                           
   cout << "metodo 4 : " << suma3 << "\n";
                            
}

