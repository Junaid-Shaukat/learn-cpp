#include<iostream>
using namespace std;

int main()
{
cout<<"Do you want to play a game? (y/n) : ";

int response=getchar(); // because we make the response of int data type it will give the ascii value of the input
 // convets int into char -> static casting

// cout<<"You entered: "<<static_cast<char>(response)<<endl; -> recomended way

//instead of using the static_cast<char> we can use this syntax
cout<<"You entered: "<< char(response) <<endl;
if(tolower(response) == 'y') //yes
{
    cout<<"Let's play a game, then... \n";
}
return 0;
}