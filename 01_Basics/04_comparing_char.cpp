#include<iostream>
using namespace std;

int main()
{
    // char is the single character "\n" -> is also a character

cout<<"Do you want to play a game? (y/n) : ";
string response;
cin>>response;
cout<<"You entered: "<<response<<endl;
// response[0] -> gives the single character in the string
// tolower is a fuction that convderts input into lowercase
if(tolower(response[0]) == 'y')
{
    cout<<"Let's play a game, then... \n";
}
system("pause");
return 0;
}