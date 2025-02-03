#include <iostream>
#include <string>
using namespace std;


void Cell() {
    cout << "You're in the Cell" << endl;
}

void Hub() {
    cout << "You're in the Hub" << endl;
}

void Shower() {
    cout << "You're in the Shower" << endl;
}

void Cafeteria() {
    cout << "You're in the Cafeteria" << endl;
}

void Library() {
    cout << "You're in the Library" << endl;
}

void Courtyard() {
    cout << "You're in the Courtyard" << endl;
}

void Basketball() {
    cout << "You're in the Basketball" << endl;
}

void Benchpress() {
    cout << "You're in the Benchpress" << endl;
}


int main() {

    string place;
    
    cout << "Where do you want to go?" << endl;
    cout << "[Cell/Hub/Shower/Cafeteria/Library/Courtyard/Basketball/Benchpress]: ";
    cin >> place;

    // Check user input and call the corresponding member function
    if (place == "Cell") {
        Cell();
    } else if (place == "Hub") {
        Hub();
    } else if (place == "Shower") {
        Shower();
    } else if (place == "Cafeteria") {
        Cafeteria();
    } else if (place == "Library") {
        Library();
    } else if (place == "Courtyard") {
        Courtyard();
    } else if (place == "Basketball") {
        Basketball();
    } else if (place == "Benchpress") {
        Benchpress();
    } else {
        cout << "Invalid place entered." << endl;
    }

    return 0;
}
