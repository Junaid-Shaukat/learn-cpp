#include <iostream>
using namespace std;

int main()
{
    cout << "Do you want to play a game? (y/n) : ";
    char response = getchar(); //Y
    // Y
    // y -> in this case we lose all our data
    // so we declare a new variable for changing the data
    char responseFiltered = tolower(response);//y
    cout << "You entered: " << response << endl;
    // checking for conditions...
    if (responseFiltered == 'y')
    {
        cout << "Let's play a game, then... \n";
    }
    // if the above condition is not true then check for this one
    else if (responseFiltered == 'n')
    {
        cout << "Maybe Next time. Goodbye! \n";
    }
    // if the all upper conditions not true run this block
    else
    {
        cout << "hmm... I don't understand.\n";
    }
    return 0;
}