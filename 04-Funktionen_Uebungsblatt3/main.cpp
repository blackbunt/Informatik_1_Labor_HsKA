/*
main.cpp
Abgabe Informatik 1 Labor
MWFunktionen

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]
Matr.Nr.:   64681
Datum:      29.12.2019

MWFunktionen erfragt den/die User*in welcher Mittelwert der gegebenen Reihe berechnet werden soll.
Die Berchnung erfolgt in ausgelagerten Funktionen.
Reihe 0;3;6...90;93

Zunaechst die Berechnung per Excel:
Arithmetischer Mittelwert:      46.5
Geometrischer Mittelwert:       37,25239635
Harmonischer Mittelwert:        23,09270866
*/

#include <iostream>
using namespace std;
#include <cmath>

// Deklaration der Funktion ArithMW()
float ArithMW();
// Deklaration der Funktion GeomMW()
float GeomMW();
// Deklaration der Funktion HamMW()
float HamMW();

int main() {
    int eingabe = 0;  // Eingabe welcher MW berechnet werden soll
    do {
        // User*in wird gefragt was Berechnet werden soll

        cout << "Welcher Mittelwert soll berechnet werden?" << endl;
        cout << "    1. Arithmetischer Mittelwert" << endl;
        cout << "    2. Geometrischer Mittelwert" << endl;
        cout << "    3. Harmonischer Mittelwert" << endl;
        cout << "    0. Programm beenden" << endl;
        cout << endl;
        cout << "Bitte geben Sie eine Zahl von 0-3 ein: ";
        cin >> eingabe;
        cout << endl;

        switch (eingabe) {
            // Abbruch des Programms
        case 0:
            return 0;
            break;
            // Arithmetischer Mittelwert
        case 1:
            cout << "Der Mittelwert betraegt: " << ArithMW() << endl;
            break;
            // Geometrischer Mittelwert
        case 2:
            cout << "Das Geometrischer Mittelwert betraegt: " << GeomMW() << endl;
            break;
            // Harmonische Mittelwert
        case 3:
            cout << "Der Harmonische Mittelwert betraegt: " << HamMW() << endl;
            break;
            // Default
        default:
            cout << "Falsche Eingabe!" << endl;
            break;
        }
        cout << endl << "-------------------------------------------------------" << endl << endl;


    } while (eingabe != 0);
}


// Definition der Funktion ArithMW()
float ArithMW()
{
    int i = 0;
    float Summe = 0.0;
    float ergebnis = 0.0;

    for (i = 0; i <= 31; i++) {                 // von (anfangswert; bis Endwert; addiere jeweils 1) laeuft von 1 bis 31
        Summe += i * 3;                         // Summe von 0 * 3 bis 31 * 3
    }

    ergebnis = Summe / (float)i;
    return (ergebnis);                  // Mittelwert berechnen
};

// Definition der Funktion GeomM()
float GeomMW()
{
    int i = 0;
    double produkt = 1.0;
    float ergebnis = 0.0;

    for (i = 1; i <= 31; i++) {                 // von (anfangswert; bis Endwert; addiere jeweils 1) laeuft von 1 bis 31
        produkt *= ((double)i * 3.0);           // Werte von 1 * 3 bis 31 * 3 werden multipliziert
    }

    ergebnis = pow(produkt, 1.0 / 31.0);
    return (ergebnis);          // i. Wurzel des Produkts der Reihe
};

// Definition der Funktion HamMW()
float HamMW()
{
    int i = 1;
    float Summe = 0.0;
    float ergebnis = 0.0;

    for (i = 1; i <= 31; i++) {                 // von (anfangswert; bis Endwert; addiere jeweils 1) laeuft von 1 bis 31
        Summe += 1.0 / ((float)i * 3.0);        // Werte von 1 / (1 * 3) bis 1 / (31 * 3) werden aufsummiert
    }

    ergebnis = 31.0 / Summe;
    return(ergebnis);                       //  i / Summe
};
