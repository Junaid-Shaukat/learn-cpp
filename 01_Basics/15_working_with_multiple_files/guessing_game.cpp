#include <iostream>
#include "./game.h"

using namespace std;

int main()
{

    cout << "Do you want to play a game? (y/n) : ";
    char response = tolower(getchar()); // Y
    cout << "You entered: " << response << endl;
    if (response == 'y')
    {
        cout << "Let's play a game, then... \n";
        cout << "Have you beat the game? \n0: no\n1: yes\n";
        bool beatGame;
        cin >> beatGame;
        bool won;
        if (beatGame)
        {
            cout << "Because you beat the game you can play the expert mode. Use the secret difficulity \"expert\".\n";
            won = playGame(2);
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
                won = playGame(8);

                break;
            case 1: // medium
                cout << "You choose medium\n";
                won = playGame(5);

                break;
            case 2: // hard
                cout << "You choose hard\n";
                won = playGame(1);

                break;

            default:
                cout << "hmm. I dont understand";
                break;
            }
        }
        if (won)
        {
            cout << "congrats, you won!" << endl;
        }
        else
        {
            cout << "You lost! Try again later...\n";
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
