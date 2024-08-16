#include <iostream>
using namespace std;
int main(){


 cout << "Do you want to play a game? (y/n) : ";
    char response = tolower(getchar()); // Y
    cout << "You entered: " << response << endl;
    // checking for conditions...
    if (response == 'y')
    {
        cout << "Let's play a game, then... \n";
        cout<<"Have you beat the game? \n0: no\n1: yes\n";
        bool beatGame;
        cin>>beatGame;
        if(beatGame){
            cout<<"Because you beat the game you can play the expert mode. Use the secret difficulity \"expert\".\n";
        }
        cout << "Choose the difficulity?\n"
             << "0: easy\n1: medium\n2: hard \n ";
        int difficulity;
        cin >>difficulity;

//switch statement contains case and check for the cases it the case is match then it will execute the block of code and break statement helps to get out of the case after execution.
//switch statement always accept the integer value link 0,1,2,3
//default case is the code which runs if none of the above case matches
            switch (difficulity)
            {
            case 0: //easy
            cout<<"You choose easy\n";
                break;
            case 1: //medium
            cout<<"You choose medium\n";
                break;
            case 2: //hard
            cout<<"You choose hard\n";
                break;
            
            default:
            cout<<"hmm. I dont understand";
                break;
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


    return 0;
}