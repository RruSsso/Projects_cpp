#include <iostream>


using namespace std;

int main()
{
    int min = 10, MAX = 100, N = 0, mitad = 0, Semidat = 0, division = 2, Suma = 0;
    cout << "Dame un numero entre 10 y 100 no esos" << endl;
    cin >> N;
    if (N > min)
    {
        if (N < MAX)
        {
            mitad = N / min;
            Semidat = N % min;
            cout << "a: " << mitad << "   b: " << Semidat << endl;
            // ahora suma
            Suma = mitad + Semidat;
            if (Suma < 10)
            {
                cout << "Su suma es menor a 10 entonces te lo invertire" << endl;
                Suma = Semidat * 10 + mitad;
                cout << Suma << endl;
            }
            else
            {
                cout << "Esto es mayor a 10" << endl;
                cout << Suma;
            }
        }
    }
    else
    {
        cout << "Te dije que eso no se hace" << endl;
    }
}