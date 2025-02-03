#include <iostream>
using namespace std;

// Funktion 1: Gibt eine entsprechende Nachricht aus.
void funktion1() {
    cout << "Funktion 1 wurde aufgerufen." << endl;
}

// Funktion 2: Gibt eine andere Nachricht aus.
void funktion2() {
    cout << "Funktion 2 wurde aufgerufen." << endl;
}

// Funktion 3: Gibt eine weitere Nachricht aus.
void funktion3() {
    cout << "Funktion 3 wurde aufgerufen." << endl;
}

int main() {
    int wahl;
    
    // Benutzer wird aufgefordert, eine Auswahl zu treffen.
    cout << "Wähle eine Funktion aus:" << endl;
    cout << "1 - Aufruf von Funktion 1" << endl;
    cout << "2 - Aufruf von Funktion 2" << endl;
    cout << "3 - Aufruf von Funktion 3" << endl;
    cout << "Deine Wahl: ";
    cin >> wahl;
    
    // Je nach Eingabe wird die entsprechende Funktion aufgerufen.
    switch (wahl) {
        case 1:
            funktion1();
            break;
        case 2:
            funktion2();
            break;
        case 3:
            funktion3();
            break;
        default:
            cout << "Ungültige Auswahl. Bitte wähle 1, 2 oder 3." << endl;
            break;
    }
    
    return 0;
}