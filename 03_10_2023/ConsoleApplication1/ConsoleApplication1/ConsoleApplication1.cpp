#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Podaj liczbe od 1 do 30: " << endl; 
	cin >> x;

	switch (x) {
	case 1:
		cout << "porsche";
		break;

	case 2:
		cout << "audi";
		break;

	case 3:
		cout << "bmw";
		break;

	case 4:
		cout << "citroen";
		break;

	case 5:
		cout << "mercedes";
		break;

	case 6:
		cout << "nissan";
		break;

	case 7:
		cout << "dacia";
		break;

	case 8:
		cout << "fiat";
		break;

	case 9:
		cout << "ford";
		break;

	case 10:
		cout << "opel";
		break;

	case 11:
		cout << "peugeot";
		break;

	case 12:
		cout << "kia";
		break;

	case 13:
		cout << "hyundai";
		break;

	case 14:
		cout << "seat";
		break;

	case 15:
		cout << "skoda";
		break;

	case 16:
		cout << "toyota";
		break;

	case 17:
		cout << "volkswagen";
		break;

	case 18:
		cout << "volvo";
		break;

	case 19:
		cout << "dodge";
		break;

	case 20:
		cout << "jaguar";
		break;

	case 21:
		cout << "lexus";
		break;

	case 22:
		cout << "mclaren";
		break;

	case 23:
		cout << "jeep";
		break;

	case 24:
		cout << "honda";
		break;

	case 25:
		cout << "cupra";
		break;

	case 26:
		cout << "ferrari";
		break;

	case 27:
		cout << "suzuki";
		break;

	case 28:
		cout << "tesla";
		break;

	case 29:
		cout << "subaru";
		break;

	case 30:
		cout << "man";
		break;


	default:
		cout << "Podana liczba jest nie poprawna!!! ";
		break;
	}
}

