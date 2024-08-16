#include<iostream>
using namespace std;

int main()
{

cout<<"Do you want to play a game? (y/n) : ";
string response;
cin>>response;
cout<<"You entered: "<<response<<endl;

if(response== "y"){
     //if we write if(true) it will always execute this code and if we write if(false) it will not execute this block of code
    cout<<"Let's play a game, then... \n";
}
return 0;
}