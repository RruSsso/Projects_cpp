#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void main()
{
	int num1 = 0, num2 = 0, dig1, dig2, dig3, dig4;
	

	dig1 = num1 % 10;
	dig2 = (num1 / 10) % 10;

	dig3 = num2 % 10;
	dig4 = (num2 / 10) % 10;
	cout << "dame 2 numeros de 2 digitos para determinar cual digito es mayor";
	cin >> num1;
	cin >> num2;

	if (dig1 < dig2 && dig1 < dig3 && dig1 < dig4)
	{
		cout << "mayor en el 1ro";
		if (dig2 < dig3 && dig2 < dig4)
		
			cout << "mayor en el 1ro";
			if (dig3 < dig4)
			
				cout << "mayor en el 2do";
				
				else
				cout << "mayor en el 2do";		
		
	}
}