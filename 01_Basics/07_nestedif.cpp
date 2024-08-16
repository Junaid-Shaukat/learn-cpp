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
        cout<<"Choose the difficulity? (easy/medium/hard) : ";
        string difficulity;
        cin>>difficulity;
        if(difficulity=="easy"){
            cout<<"ezpz lemon squeey \n";
        }
        else if(difficulity=="medium"){
            cout<<"Difficulity set to Medium \n";
        }
        else if (difficulity=="hard"){
            cout<<"Difficulity set to Hard \n";
        }
        else{
            cout<<"invalid!, Please enter the valid difficulity"<<endl;
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