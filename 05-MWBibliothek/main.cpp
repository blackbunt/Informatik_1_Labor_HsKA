/*
main.cpp
Abgabe Informatik 1 Labor
Mittelwert Funktionen

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]

Datum:      30.12.2019

MWFunktionen erfragt von User*in welcher Mittelwert der gegebenen Reihe berechnet werden soll.
Die Berechnung erfolgt in einer Bibliothek.
Reihe 0;3;6...90;93

Zunaechst die Berechnung per Excel:
Arithmetischer Mittelwert:      46.5
Geometrischer Mittelwert:       37,25239635
Harmonischer Mittelwert:        23,09270866
*/

#include <iostream>
using namespace std;

#include "MW.h"                 // Die Bibiliotek MW wird eingebunden.

int main() {
    int eingabe = 0;            // Eingabe welcher MW berechnet werden soll
    do {
        // User*in wird gefragt welcher MW berechnet werden soll

        cout << "Welcher Mittelwert soll berechnet werden?" << endl;
        cout << endl;
        cout << "    1. Arithmetischer Mittelwert" << endl;
        cout << "    2. Geometrischer Mittelwert" << endl;
        cout << "    3. Harmonischer Mittelwert" << endl;
        cout << "    0. Programm beenden" << endl;
        cout << endl;
        cout << "Bitte geben Sie eine Zahl von 0 - 3 ein: ";
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
            cout << "Der Geometrischer Mittelwert betraegt: " << GeomMW() << endl;
            break;
            // Harmonischer Mittelwert
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
