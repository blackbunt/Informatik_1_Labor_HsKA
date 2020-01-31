#include <iostream>
#include <cmath>
using namespace std;

// Definition der Funktion ArithMW()
float ArithMW(int reihe[32]) {
	int i = 0;
	float Summe = 0;
	float ergebnis = 0.0;

	for (i = 0; i <= 31; i++) {
		Summe += reihe[i];
	}

	ergebnis = Summe / i;
	return (ergebnis);
};

// Definition der Funktion GeomMW()
float GeomMW(int reihe[32]) {
	int i = 0;
	double produkt = 1.0;
	float ergebnis = 0.0;

	for (i = 1; i <= 31; i++) {
		produkt *= reihe[i];
	}

	ergebnis = pow(produkt, 1.0 / 31.0);
	return (ergebnis);
};

// Definition der Funktion HamMW()
float HamMW(int reihe[32]) {
	int i = 1;
	float Summe = 0;
	float ergebnis = 0.0;

	for (i = 1; i <= 31; i++) {
		Summe += 1.0 / reihe[i];
	}
	ergebnis = 31.0 / Summe;
	return(ergebnis);
};