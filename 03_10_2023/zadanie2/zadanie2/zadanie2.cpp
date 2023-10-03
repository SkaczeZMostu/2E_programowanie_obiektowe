#include <iostream>

using namespace std;

int main()
{
	double a, b, h;
	int x;

	cout << "Powiedz czego pole chcesz obliczyć(1 = Kwadrat; 2 = trapez; 3 = romb; 4 = trojkat) " << endl;  cin >> x;

	switch (x) {

	case 1:
		cout << "podaj bok: " << endl; 
		cin >> a;
		cout << "pole kwadratu to: " << a * a;
		break;
	case 2:
		cout << "Podaj 1 podaswe" << endl;
		cin >> a;
		cout << "Podaj 2 podaswe" << endl;
		cin >> b;
		cout << "Podaj wysokosc" << endl;
		cin >> h;
		cout << "pole trapezu to: " << (a+b)*h/2;
		break;
	case 3:
		cout << "podaj bok: " << endl;
		cin >> a;
		cout << "podaj wysokosc: " << endl;
		cin >> h;
		cout << "pole rabu to: " << a * h;
		break;
	case 4:
		cout << "podaj podstawe: " << endl;
		cin >> a;
		cout << "podaj wysokosc: " << endl;
		cin >> h;
		cout << "pole trojkatu to: " << a * h / 2;
		break;
	default:
		cout << "Zle polecenie";
	}

}
