/*
main.cpp
Abgabe Informatik 1 Labor
2Hz Blinken

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]

Datum:      28.12.2019

Alle n Millisekunden eine Leuchte fuer 10 Sekunden Ein- und Ausschalten
Blinkfrequenz betraegt 2 Hz
*/

#include <iostream>
using namespace std;
#include <time.h>

void sleep(clock_t wait);

int main() {
    long int n = 0;
    bool A = 1;
    unsigned int frequenz = 0;
    unsigned intervall = 0;

    cout << "Anzahl der Clocks pro Sekunde = " << CLOCKS_PER_SEC << endl;
    cout << "Geben Sie eine Freqenz in Hz ein: ";
    cin >> frequenz;

    intervall = CLOCKS_PER_SEC / frequenz / 2;

    for (n = 0; n < 40; n++) {
        A = !A;
        sleep((clock_t)intervall);
        // cout << A;
        if (A) {
            cout << "\r 0";
        }
        else {
            cout << "\r .";
        }
    }

    cout << endl;
    cout << "Programmende" << endl;

    system("Pause");
}


void sleep(clock_t wait) {
    clock_t goal;
    goal = wait + clock();
    while (goal > clock() );
}
