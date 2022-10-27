
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int i2;
    for (int i = 50; i <= 12000; i++)
    {
        if((i%5)==0)
        {

        }
        else if ((i % 3) == 0) 
        {

        }
        else
        {
            //cout << i << endl;
            x++;
        }
    }
    cout << "(for) TOTAL DE NUMEROS: ";
    cout << x << endl;

    x = 0;
    i2 = 50;

    do{
        if ((i2 % 5) == 0)
        {
            
        }
        else if ((i2 % 3) == 0)
        {

        }
        else
        {
            //cout << i2 << endl;
            x++;
        }
        i2 = i2 + 1;

    } while (i2<=12000);
    cout << "(do-while) TOTAL DE NUMEROS: ";
    cout << x << endl;

    x = 0;
    i2 = 50;

    while (i2 <= 12000) {
        if ((i2 % 5) == 0)
        {

        }
        else if ((i2 % 3) == 0)
        {

        }
        else
        {
            //cout << i2 << endl;
            x++;
        }
        i2 = i2 + 1;
    }
    cout << "(while) TOTAL DE NUMEROS: ";
    cout << x << endl;


}
