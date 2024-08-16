#include <iostream>
using namespace std;
int main(){
/*
// 1 -> represents true and 0 -> represents false
cout << ("hello" == "hello")<<endl; // it gives 1 as output which means it is true
cout << ("hello" != "hello")<<endl; // it gives 0 as output which means it is false and ! is the not operator

cout<<true; // boolean literal
cout<<"\ntrue"; // string literal

*/

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
        cout << "Choose the difficulity? (easy/medium/hard) : ";
        string difficulity;
        cin >> difficulity;
     
        if (difficulity == "easy" || difficulity == "medium" || difficulity == "hard")
        {
            cout << "Reswaning Enabled.... \n";
        }
        //and operator all values must be true &&
        else if (difficulity == "expert" && beatGame )
        {
            cout << "Good Luck.... You are in the Expert mode \n";
        }
        else if (difficulity == "expert" && !beatGame )
        {
            cout << "You have to beat the game atleast once \n";
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