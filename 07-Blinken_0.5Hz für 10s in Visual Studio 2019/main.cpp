/*
main.cpp
Abgabe Informatik 1 Labor
0.5Hz Blinken

Name        Bernhard Kauffmann [kabe1017@hs-karlsruhe.de]

Datum:      11.01.2020

Blinkfrequenz sind 0.5Hz
*/

#include <iostream>
using namespace std;
#include <time.h>

void sleep(clock_t wait);

int main() {
    long int n = 0;
    bool A = 1;
    float frequenz = 0.5;
    unsigned intervall = 0;

    intervall = CLOCKS_PER_SEC / frequenz / 2;
    for (n = 0; n < 40; n++) {
        A = !A;
        sleep((clock_t)intervall);
        //cout << A;
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


void sleep(clock_t wait)
{
    clock_t goal;
    goal = wait + clock();
    while (goal > clock());
}
