/*
main.cpp
Abgabe Informatik 1 Labor
08_MultiPlex_XX

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]
Matr.Nr.:   64681
Datum:      12.91.2020

*/

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

float pi = 3.14159265;

struct multiplex

{
    int arr1[64];
    int arr2[64];
    float arr3[64];
    float arr4[64];
    int step = 0;
    int selchan = 0;
    float MW = 0.0;
    float Varianz = 0.0;
};

void fuellen(multiplex* messwert) {
    cout << setw(10) << "Messwert" << setw(10) << "Sensor 1" << setw(10);
    cout << "Sensor 2" << setw(15) << "Sensor 3" << setw(15) << "Sensor 4" << endl;

    for (int i = 0; i < 64; i++) {
        messwert->arr1[i] = (rand() % 100 + 1);
        messwert->arr2[i] = (rand() % 100 + 1);
        messwert->arr3[i] = sin(2 * pi / 64 * i);
        messwert->arr4[i] = cos(2 * pi / 64 * i);

        cout << setw(10) << i << ";" << setw(10) << messwert->arr1[i] << ";" << setw(10) << messwert->arr2[i] << ";";
        cout << setw(15) << messwert->arr3[i] << ";" << setw(15) << messwert->arr4[i] << ";" << endl;

    }

    cout << endl << endl;
}
void MWVar(multiplex* messwert) {
    float summe = 0;
    float summeVar = 0;
    int n = 0;

    for (int i = 0; i < 64; (i += messwert->step)) {
        switch (messwert->selchan) {
        case 1:
            summe += messwert->arr1[i];
            n++;
            break;
        case 2:
            summe += messwert->arr2[i];
            n++;
            break;
        case 3:
            summe += messwert->arr3[i];
            n++;
            break;
        case 4:
            summe += messwert->arr4[i];
            n++;
            break;
        default:
            break;
        }
    }
    messwert->MW = summe / n;

    for (int i = 0; i < 64; (i += messwert->step)) {
        switch (messwert->selchan) {
        case 1:
            summeVar += pow(messwert->arr1[i] - messwert->MW, 2);
            break;
        case 2:
            summeVar += pow(messwert->arr2[i] - messwert->MW, 2);
            break;
        case 3:
            summeVar += pow(messwert->arr3[i] - messwert->MW, 2);
            break;
        case 4:
            summeVar += pow(messwert->arr4[i] - messwert->MW, 2);
            break;
        default:
            break;
        }
    }
    messwert->Varianz = summeVar / n;
}


int main() {
    multiplex multp;

    fuellen(&multp);

    char selKanal = 'n';
    do {
        if (selKanal == 'j') {
            cout << endl << "-------------------------------------------------------" << endl << endl;
        }
        cout << "Bitte geben Sie einen Kanal ein: ";
        cin >> multp.selchan;

        cout << "Bitte geben Sie die Schrittweite an: ";
        cin >> multp.step;

        MWVar(&multp);

        cout << "Mittelwert: " << multp.MW << endl;
        cout << "Varianz: " << multp.Varianz << endl;

        cout << endl;
        cout << "Anderen Kanal waehlen ? j/n: ";
        cin >> selKanal;
        cout << endl;

    } while (selKanal != 'n');


    return 0;
}



