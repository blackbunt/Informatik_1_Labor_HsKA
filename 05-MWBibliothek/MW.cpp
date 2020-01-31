#include <iostream>
#include <cmath>
using namespace std;

// Definition der Funktion ArithMW()
float ArithMW() {
	float ergebnis = 0.0;
	int i = 0;
	float Summe = 0.0;

	for (i = 0; i <= 31; i++) {
		Summe += (float)i * 3.0;
	}

	ergebnis = Summe / (float)i;
	return (ergebnis);
};

// Definition der Funktion GeomMW()
double GeomMW() {
	float ergebnis = 0.0;
	int i = 0;
	double produkt = 1.0;

	for (i = 1; i <= 31; i++) {
		produkt *= ((double)i * 3.0);
	}

	ergebnis = pow(produkt, 1.0 / 31.0);
	return (ergebnis);
};

// Definition der Funktion HamMW()
float HamMW() {
	float ergebnis = 0.0;
	int i = 1;
	float Summe = 0.0;

	for (i = 1; i <= 31; i++) {
		Summe += 1.0 / ((float)i * 3.0);	
	};

	ergebnis = 31.0 / Summe;
	return (ergebnis);
}