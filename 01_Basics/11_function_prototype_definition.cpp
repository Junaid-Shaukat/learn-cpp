#include <iostream>
using namespace std;

// void playGame(); // function prototype
void playGame(){//functon definition
cout<<"Playing game ..."<<endl;
};
int main()
{

    cout << "Do you want to play a game? (y/n) : ";
    char response = tolower(getchar()); // Y
    cout << "You entered: " << response << endl;
    // checking for conditions...
    if (response == 'y')
    {
        cout << "Let's play a game, then... \n";
        cout << "Have you beat the game? \n0: no\n1: yes\n";
        bool beatGame;
        cin >> beatGame;
        if (beatGame)
        {
            cout << "Because you beat the game you can play the expert mode. Use the secret difficulity \"expert\".\n";
            playGame();
        }
        else
        {
            cout << "Choose the difficulity?\n"
                 << "0: easy\n1: medium\n2: hard \n ";
            int difficulity;
            cin >> difficulity;

            switch (difficulity)
            {
            case 0: // easy
                cout << "You choose easy\n";
            playGame();

                break;
            case 1: // medium
                cout << "You choose medium\n";
            playGame();

                break;
            case 2: // hard
                cout << "You choose hard\n";
            playGame();

                break;

            default:
                cout << "hmm. I dont understand";
                break;
            }
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

