//#include <iostream>
//using namespace std;
//
//const int MAX_VALUE = 101;
//const int MIN_VALUE = 0;
//
//int guess;
//int high = MAX_VALUE;
//int low = MIN_VALUE;
//
//char choice;
//
//int main() {
//
//
//    cout << "Piensa en un numero entre " << MIN_VALUE << " y " << MAX_VALUE << ". \n\n";
//    srand(time(0));
//    guess = rand() % 100 + 1;
//
//    while ((high - low) != 0) {
//        cout << "Es tu numero menor? " << guess << "? \n y or n. \n\n";
//        cin >> choice;
//
//        if (choice == 'y' || choice == 'Y') {
//            high = guess;
//            guess -= (high - low) / 2;
//        }
//        else if (choice == 'n' || choice == 'N') {
//            low = guess;
//            guess += (high - low) / 2;
//        }
//        else cout << "Elegiste lo incorrecto." << endl;
//
//
//    }
//    cout << "Tu numero es?: " << high << ".\n";
//
//    system("pause");
//    return 0;
//}