#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 100 + 1;	
	cout << "Adivina mi numero\n\n";

	do
	{
		cout << "Dime un numero entre 1 - 100 ";
		cin >> guess;
		tries++;
		
		if (guess > num)
			cout << "Muy alto!\n\n";
		else if (guess < num)
			cout << "Muy bajo!\n\n";
		else
			cout << "\nincreible lo lograste" << tries << "intentos!\n";
	} while (guess != num);

	return 0;
}