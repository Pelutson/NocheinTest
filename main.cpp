
//#include "cell.cpp"
#include <iostream>
#include <string>
using namespace std;
void hund();

<<<<<<< Updated upstream
// Class Definition
class Place {
public:
    // Constructor
    Place() {
        cout << "You're in the Cell" << endl;
    }

    // Member functions for different places
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
};

int main() {
    string place;
    // Create an object of the class Place
    Place myplace;  // Calls the constructor and prints "You're in the Cell"

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
=======
int main()
{
    cout << "Test1";
    hund();
}
>>>>>>> Stashed changes
