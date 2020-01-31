/*
main.cpp
Abgabe Informatik 1 Labor

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]
Matr.Nr.:   64681
Datum:      08.12.2019

Berechnung per Excel:
Mittelwert  =   22,5
Varianz =      191,25
*/

#include <iostream>
#include <cmath>                                            // Mathematische Funktionen
using namespace std;


int main() {
    unsigned int i = 0;                                     // i bezeichnet den i-ten Messwert
    unsigned int j = 0;                                     // Laufvariable j; Berechnung Varianz

    float Summe = 0;                                        // Summe Reihe
    float MW = 0;                                           // Mittelwert Reihe

    float SummeVarianz = 0;                                 // Summe Varianz
    float Varianz = 0;                                      // Varianz Reihe

    // Berechnung Mittelwert
   
    for (i = 0; i <= 15; i++) {                             // von Anfangswert bis Endwert addiere jeweils 1; Endwert bis 15
        Summe += i * 3;                                     // Summe derWerte von 0 * 3 bis 15 * 3
    }

    MW = Summe / i;                                         // Mittelwertbildung
    cout << "Der Mittelwert betraegt: " << MW << endl;       // Ausgabe Ergebnis

    //Berechnung Varianz

    for (j = 0; j <= 15; j++) {                             // von Anfangswert bis Endwert addiere jeweils 1; Endwert 15
        SummeVarianz += pow((j * 3) - MW, 2);               // Wert der Reihe minus Mittelwert, im Quadrat
    }

    Varianz = SummeVarianz / j;                             // SummeVarianz wird durch Anzahl der Werte der Reihe geteilt
    cout << "Die Varianz betraegt: " << Varianz << endl;    // Ausgabe Ergebnis


    system("pause");
}
