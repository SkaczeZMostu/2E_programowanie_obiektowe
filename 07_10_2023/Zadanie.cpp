#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int number;
    int computer = rand() % 5 + 1;
    cout << "Podaj liczbe od 1-5(1-nożyce, 2-papier, 3-kamien, 4-jaszczurka, 5-spock)" << endl;
    cin >> number;
    while(number == 0 && number > 5){
        if (number == computer) {
            cout << "remis" << endl;
        }
        else if (number == 1 && computer == 2 || computer == 4) {
            cout << "Wygrales" << endl;
        }
        else if (number == 2 && computer == 3 || computer == 5) {
            cout << "Wygrales" << endl;
        }
        else if (number == 3 && computer == 1 || computer == 4) {
            cout << "Wygrales" << endl;
        }
        else if (number == 4 && computer == 2 || computer == 5) {
            cout << "Wygrales" << endl;
        }
        else if (number == 5 && computer == 1 || computer == 3) {
            cout << "Wygrales" << endl;
        }
        else {
            cout << "przegrales" << endl;
        }
    }

}
