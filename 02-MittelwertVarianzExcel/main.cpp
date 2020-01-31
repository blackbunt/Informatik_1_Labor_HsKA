/*
main.cpp
Abgabe Informatik 1 Labor

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]

Datum:      08.12.2019

MWeinfachVarianz berechnet den Mittelwert und die Varianz
einer vorgegebenen theoretischen Messreihe 0;3;6...90;93

Berechnung per Excel:
Mittelwert  =   46,5
Varianz =      767,25
*/

#include <iostream>
#include <cmath>											// Mathematische Funktionen
using namespace std;

int main() {
	unsigned int i = 0;										// i bezeichnet den i-ten Messwert
	unsigned int j = 0;										// Laufvariable j Verechnung Varianz

	float Summe = 0;										// Summe Reihe
	float MW = 0;											// Mittelwert Reihe

	float SummeVarianz = 0;									// Summe Varianz
	float Varianz = 0;										// Varianz Reihe

	// Berechnung Mittelwerts

	for (i = 0; i <= 31; i++) {								// von Anfangswert bis Endwert addiere jeweils 1; Endwert 31
		Summe += i * 3;                                     // Werte von 0 * 3 bis 31 * 3 werden Aufsummiert
	}

	MW = Summe / i;                                         // Mittelwert berechnen
	cout << "Der Mittelwert betraegt: " << MW << endl;      // Ausgabe Ergebnis

	// Berechnung Varianz

	for (j = 0; j <= 31; j++) {                             // von Anfangswert bis Endwert addiere jeweils 1; Endwert 31
		SummeVarianz += pow((j * 3) - MW, 2);               // Wert der Reihe minus Mittelwert, im Quadrat
	}

	Varianz = SummeVarianz / j;                             // SummeVarianz wird durch Anzahl der Werte der Reihe geteilt
	cout << "Die Varianz betraegt: " << Varianz << endl;    // Ausgabe des Ergebnis

	system("pause");
}
