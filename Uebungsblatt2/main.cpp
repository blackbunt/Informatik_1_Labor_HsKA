/*
main.cpp
Abgabe Informatik 1 Labor

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]
Matr.Nr.:   64681
Datum:      28.12.2019

Quadratische Gleichung [x^2 + px + q = 0] loesen.
User*in kann Werte fuer p und q eingeben.
Programm berechnet x1 und x2.

Test-Werte per Taschenrechner ermittelt:
 p=5, q=4, x1 = -1, x2 = -4
 p=1, q=2, Keine reele Loesung
 p=8, q=3, x1 = -0.394449, x2 = -7.60555
*/

#include <iostream>
using namespace std;
#include <cmath>

char repeat = 'n';
float p = 0.0;
float q = 0.0;
float x1 = 0.0;
float x2 = 0.0;

int main() {
    cout << "Quadratische Gleichung der Form 'x ^ 2 + px + q = 0' loesen" << endl;
    cout << endl;

    do {
        // GUI Cleanup
        if (repeat == 'j') {
            cout << "-------------------------------------------------------------" << endl;
            cout << endl;
        }

        cout << "Bitte geben sie 'p' ein: ";
        cin >> p;
        cout << "Bitte geben sie 'q' ein: ";
        cin >> q;
        cout << endl;

        if (p == 0 && q == 0) {
            return 0;
        }

        if ((pow(p / 2, 2) - q) < 0) {
            cout << "Die Funktion hat keine reelle Loesung." << endl;
        }
        else { // Werte Berechnen
            x1 = -(p / 2) + sqrt((pow(p / 2, 2) - q));
            x2 = -(p / 2) - sqrt((pow(p / 2, 2) - q));

            cout << "x1 = " << x1 << endl; // Ausgabe x1, x2
            cout << "x2 = " << x2 << endl;
        }
        cout << endl;
        cout << "Nochmals Werte berechnen? j/n : ";
        cin >> repeat;
        cout << endl;

        if (repeat == 'n') { // Programm beenden
            return 0;
        }

    } while (repeat == 'j');
}
