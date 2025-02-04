
#include <iostream>
using namespace std;
#include <unistd.h>

//Variabels   
string playerName;
int decicionPolice;
int gayOmeter;    //If 100% yourturn Gay
int dildoDecision;


void Cell()
{
    cout << "Guard: is your Name?: "<< endl;
    cin >> playerName;
    cout << playerName << ": My name is " << playerName << endl;
    cout << "Guard: What a dumb name"<< endl;

    cout << "What do you want to do? Pop in his mouth (1) \n Take you Willyw Wonker out of you pants (2) \n Start crying (3)" << endl;
    cin >> decicionPolice;

    switch(decicionPolice)
    {
        case 1:

            cout << " The police run away";
            break;

        case 2:

            cout << "The guard was stundt when he saw your Willy Wonker and toucht it (You liked it) \n \n   --The probalility that you turn gay increased by 10%" << endl;
            gayOmeter = gayOmeter + 10;
            cout <<"The probability that you turn gay are:" << gayOmeter;
            break;
        case 3:
        
            cout << "The guard startet lauging and punshed in you balls (Now you are steril)" << endl;
            break;


    };

    cout << "The guard left the cell. Now you are alone. You turn arount and see that there are 2 beds. Probaly you are not  alone here. Your see a big black dildo in the shelf.\n --What do you want do do?--\nTake the dildo and use it (1)\n Turn aroung (2)" <<endl;
    cin>> dildoDecision;

    switch(dildoDecision)
    {
        case 1:
            sleep(1);
            cout << "The Dildo looks used, but you dondt care about that. (You liked putting it in your ass)\n --The probability that you turn gay increased by 10%" << endl;
            gayOmeter = gayOmeter + 10;
            cout <<"The probability that you turn gay are:" << gayOmeter;
            break;
    }

}