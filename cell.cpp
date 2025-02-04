
#include <iostream>
using namespace std;
int playerName;
int decicionPolice;
void hund()
{
    cout << "Guard: is your Name?: "<< endl;
    cin >> playerName;
    cout << playerName << ": My name is" << playerName << endl;
    cout << "Guard:: What a dumb name"<< endl;

    cout << "What do you want to do? Pop in his mouth (1) \n Take you Willyw Wonker out of you pants (2) \n Start crying (3)" << endl;
    cin >> decicionPolice;

    switch(decicionPolice)
    {
        case 1:

            cout << " The police run away";
            break;

        case 2:

            cout << "The guard was stundt when he saw your Willy Wonker and toucht it (You liked it) \n    --The probalility that you turn gay increased by 10%" << endl;
            break;
        case 3:
        
            cout << "The guard startet lauging and punshed in you balls" << endl;
            break;


    };
}