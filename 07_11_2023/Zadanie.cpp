#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int number;
    int win = 0;
    int cwin = 0;
    int draw = 0;
    
    while(win != 3){
        cout << "Podaj liczbe od 1-5(1-nozyce, 2-papier, 3-kamien, 4-jaszczurka, 5-spock)" << endl;
        cin >> number;
        int computer = rand() % 5 + 1;
        if (number == 0 && number > 5) {
            cout << "Zla liczba " << endl;
            break;
        }
        else if (number == computer) {
            cout << "remis" << endl;
            draw++;
        }
        else if (number == 1 && computer == 2 || computer == 4) {
            cout << "Wygrales" << endl;
            win++;
        }
        else if (number == 2 && computer == 3 || computer == 5) {
            cout << "Wygrales" << endl;
            win++;
        }
        else if (number == 3 && computer == 1 || computer == 4) {
            cout << "Wygrales" << endl;
            win++;
        }
        else if (number == 4 && computer == 2 || computer == 5) {
            cout << "Wygrales" << endl;
            win++;
        }
        else if (number == 5 && computer == 1 || computer == 3) {
            cout << "Wygrales" << endl;
            win++;
        }
        else {
            cout << "przegrales" << endl;
            cwin++;
        }
        
        
    }
    cout << "Wygrales " << win << " razy" << endl;
}
