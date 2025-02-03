include <iostream>
#include <string>
using namespace std;

// Class Definition
class Place {
public:
    // Constructor
    Place() {
        cout << "You're in the ";
    }

    // Member functions for different places
    void Cell() {
        cout << "Cell" << endl;
    }

    void Hub() {
        cout << "Hub" << endl;
    }

    void Shower() {
        cout << "Shower" << endl;
    }

    void Cafeteria() {
        cout << "Cafeteria" << endl;
    }

    void Library() {
        cout << "Library" << endl;
    }

    void Courtyard() {
        cout << "Courtyard" << endl;
    }

    void Basketball() {
        cout << "Basketball" << endl;
    }

    void Benchpress() {
        cout << "Benchpress" << endl;
    }
};

int main() {
    string place;
    // Create an object of the class Place
    Place myplace;  // Calls the constructor and prints "You're in the "

    cout << "Where do you want to go?" << endl;
    cout << "[Cell/Hub/Shower/Cafeteria/Library/Courtyard/Basketball/Benchpress]: ";
    cin >> place;

    // Check user input and call the corresponding member function
    if (place == "Cell") {
        myplace.Cell();
    } else if (place == "Hub") {
        myplace.Hub();
    } else if (place == "Shower") {
        myplace.Shower();
    } else if (place == "Cafeteria") {
        myplace.Cafeteria();
    } else if (place == "Library") {
        myplace.Library();
    } else if (place == "Courtyard") {
        myplace.Courtyard();
    } else if (place == "Basketball") {
        myplace.Basketball();
    } else if (place == "Benchpress") {
        myplace.Benchpress();
    } else {
        cout << "Invalid place entered." << endl;
    }

    return 0;
}