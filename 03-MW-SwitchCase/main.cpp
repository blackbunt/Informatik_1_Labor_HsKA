/*
main.cpp
Abgabe Informatik 1 Labor

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]
Matr.Nr.:   64681
Datum:      18.12.2019

Nach User Eingabe berechnet MW-SwitchCase Mittelwerte der gegebenen Reihe.
Der/Die User*in kann entscheiden welcher Mittelwert berechnet wird.
Zur Auswahl stehen der arithmetische, der geometrische oder der harmonische Mittelwert.

Reihe: 0;3;6...90;93

Berechnung per Excel:

Arithmetischer Mittelwert:      46,5
Geometrischer Mittelwert:       37,25239635
Harmonischer Mittelwert:        23,09270866
*/

#include <iostream>
#include <cmath>                                            // Bibiliotek für Mathematische Funktionen
using namespace std;


int main() {
    while (true) {

        int eingabe = 0;                                    // Userauswahl fuer MW Berechnung
        float ArithMW = 0;
        float GeomM = 0;
        float HamMW = 0;
        float Summe = 0;                                    // Summe Reihe
        double produkt = 1;

        unsigned int i = 0;                                 // Laufvariable


        // Userabfrage


        cout << "Welcher Mittelwert soll berechnet werden?" << endl;
        cout << endl; 
        cout << "  1. Arithmetischer Mittelwert" << endl;
        cout << "  2. Geometrischer Mittelwert" << endl;
        cout << "  3. Harmonischer Mittelwert" << endl;
        cout << "  0. Programm beenden" << endl;
        cout << endl;
        cout << "Bitte geben sie eine Zahl von 0 - 3 ein: ";
        cin >> eingabe;
        cout << endl;

        switch (eingabe) { 
        case 0: // Abbruch des Programms

            return 0;
            break;

        case 1: // Arithmetischer MW
            for (i = 0; i <= 31; i++) {                              // von Anfangswert bis Endwert addiere jeweils 1; läuft bis 31
                Summe += i * 3;                                      // Werte von 0 * 3 bis 31 * 3 werden Aufsummiert
            }

            ArithMW = Summe / i;                                     // Mittelwert berechnen
            cout << "Der arithmetische Mittelwert betraegt: " << ArithMW << "." << endl;           
            break;
            
        case 2: // Geometrischer Mittelwert
            for (i = 1; i <= 31; i++) {                              // von (Anfangswert; bis Endwert; addiere jeweils 1) laeuft von 1 bis 31
                produkt *= ((double)i * 3.0);                        // Werte von 1 * 3 bis 31 * 3 werden Multipliziert
            }

            GeomM = pow(produkt, 1.0 / 31.0);                        // i. Wurzel ziehen
            cout << "Der geometrische Mittelwert betraegt: " << GeomM << "." << endl;
            break;

        case 3: // Harmonischer Mittelwert
            for (i = 1; i <= 31; i++) {                             // von (anfangswert; bis Endwert; addiere jeweils 1) laeuft von 1 bis 31
                Summe += 1.0 / (i * 3.0);                           // Werte von 1 / (1 * 3) bis 1 / (31 * 3) werden aufsummiert
            }
            HamMW = 31.0 / Summe;                                   // i / Summe
            cout << "Der Harmonische Mittelwert beträgt: " << HamMW << "." << endl;
            break;

        default: // Default: Falsche Eingaben abfangen
            cout << "Falsche Eingabe!" << endl;
            break;
        }

        // GUI cleanup

        cout << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << endl;


    };
}
