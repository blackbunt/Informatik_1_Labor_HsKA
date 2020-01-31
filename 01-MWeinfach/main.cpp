/*
main.cpp
Abgabe Informatik 1 Labor

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]
Matr.Nr.:   64681
Datum:      08.10.2019

MWeinfach berechnet den Mittelwert einer vorgegebenen theoretischen Messreihe
0;3;6...90;93
Berechnung per Excel oder Taschenrechner 16 * 93 =14488 / 32 = 46,5
Mittelwert  =   46,5
*/

#include <iostream>
using namespace std;


int main() {
	unsigned int i = 0;									// i bezeichnet den i-ten Messwert
	float Summe = 0;									// Summe Reihe
	float MW = 0;										// Mittelwert Reihe

	for (i = 0; i <= 31; i++) {							// von Anfangswert bis Endwert addiere jeweils 1; Endwert 31
		Summe += i * 3;									// aufsummieren der Werte von 0 * 3 bis 31 * 3 
	}

	MW = Summe / i;										// Mittelwert berechnen

	cout << "Der Mittelwert betraegt: " << MW << endl;  // Ergebnis Ausgeben

	system("pause");
}
