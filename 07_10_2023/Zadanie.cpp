#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

string intToSymbol(int choice) {
    string symbols[] = {"kamien", "spock", "papier", "jascurka", "nozyce"};
    return symbols[choice - 1];
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Inicjalizacja generatora liczb pseudolosowych
    int userChoice;
    int computerChoice;
    int userWins = 0;
    int computerWins = 0;
    int draws = 0;
    int gamesPlayed = 0;

    while (true) {
        cout << "Wybierz jeden z symboli:" << endl;
        cout << "1. kamien" << endl;
        cout << "2. spock" << endl;
        cout << "3. papier" << endl;
        cout << "4. jascurka" << endl;
        cout << "5. nozyce" << endl;
        /*cout << "6. air" << endl;
        cout << "7. paper" << endl;
        cout << "8. sponge" << endl;
        cout << "9. wolf" << endl;
        cout << "10. tree" << endl;
        cout << "11. human" << endl;
        cout << "12. snake" << endl;
        cout << "13. scissors" << endl;
        cout << "14. fire" << endl;
        cout << "15. rock" << endl;*/

        cout << "Wybierz numer (0, aby zakonczyc): ";
        cin >> userChoice;

        if (userChoice == 0) {
            break;
        }

        if (userChoice < 1 || userChoice > 5) {
            cout << "Nieprawidlowy numer. Wybierz ponownie." << endl;
            continue;
        }

        computerChoice = rand() % 5 + 1;

        cout << "Twoj wybor: " << intToSymbol(userChoice) << endl;
        cout << "Wybor komputera: " << intToSymbol(computerChoice) << endl;

        if (userChoice == computerChoice) {
            cout << "Remis!" << endl;
            draws++;
        }
        else if (((userChoice - computerChoice + 5) % 5) <= 2) {
            cout << "Wygrales!" << endl;
            userWins++;
        }
        else {
            cout << "Komputer wygral!" << endl;
            computerWins++;
        }

        gamesPlayed++;
    }

    cout << "Liczba rozegranych gier: " << gamesPlayed << endl;
    cout << "Liczba wygranych: " << userWins << endl;
    cout << "Liczba przegranych: " << computerWins << endl;
    cout << "Liczba remisow: " << draws << endl;

    return 0;
}

