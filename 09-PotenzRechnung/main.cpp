/*
main.cpp
Abgabe Informatik 1 Labor

Potenzrechnung itterativ und rekursiv

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]

Datum:      21.01.2020
 */

#include <iostream>

using namespace std;

double potenzRekursiv(double basis, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	return basis * potenzRekursiv(basis, exponent - 1);
}

double potenzIterativ(double basis, int exponent) {
	double ergebnis = 1;
	if (!exponent) {
		return 1;
	}
	for (int i = 1; i <= exponent; i++) {
		ergebnis *= basis;
	}
	return ergebnis;
}

int main() {
	cout << "Potenzrechnung [itterativ und rekursiv]" << endl << endl;
	double basis = 0;
	int exponent = 0;
	char eingabe = 'n';
	do {
		cout << "Bitte geben Sie eine Basis ein: ";
		cin >> basis;
		do {
			cout << "\nBitte geben Sie eine natuerliche Zahl als Exponent ein: ";
			cin >> exponent;
			if (exponent < 0) {
				cout << "\nKeine natuerliche Zahl eingegeben." << endl;
			}
		} while (exponent < 0);
		cout << endl;
		cout << "potenzIterativ: " << potenzIterativ(basis, exponent) << endl;
		cout << "potenzRekursiv: " << potenzRekursiv(basis, exponent) << endl;
		cout << endl;

		do {
			cout << "Neue Werte eingeben? j/n: ";
			cin >> eingabe;
			cout << endl;
			if (eingabe != 'n' && eingabe != 'N' && eingabe != 'j' && eingabe != 'J') {
				cout << "Falsche Eingabe." << endl << endl;
			}
		} while (eingabe != 'n' && eingabe != 'N' && eingabe != 'j' && eingabe != 'J');
	} while (eingabe != 'n' && eingabe != 'N');

	return 0;
}
