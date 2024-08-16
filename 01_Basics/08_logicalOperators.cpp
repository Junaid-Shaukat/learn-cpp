#include <iostream>
using namespace std;

int main()
{
    cout << "Do you want to play a game? (y/n) : ";
    char response = tolower(getchar()); // Y
    cout << "You entered: " << response << endl;
    // checking for conditions...
    if (response == 'y')
    {
        cout << "Let's play a game, then... \n";
        cout << "Choose the difficulity? (easy/medium/hard) : ";
        string difficulity;
        cin >> difficulity;
        // or operator if atleast one or more will true
        // if (difficulity == "easy" ||  "medium" ||  "hard") -> this is the wrong way beccause it will treat input as string
        if (difficulity == "easy" || difficulity == "medium" || difficulity == "hard")
        {
            cout << "Reswaning Enabled.... \n";
        }
        //and operator all values must be true &&
        else if (difficulity == "expert" )
        {
            cout << "Good Luck....\n";
        }
    }
    else if (response == 'n')
    {
        cout << "Maybe Next time. Goodbye! \n";
    }
    else
    {
        cout << "hmm... I don't understand.\n";
    }
    return 0;
}