#include<iostream>
#include<string>
#include<cstdlib>
#include"./game.h"

using namespace std;

bool playGame(int guesses)
{ 
    cout << "Playing game ..." << endl;
int correct;
    // cout<<time(NULL); // give time
    srand(time(NULL));// genrate the random number each time
    if(guesses==1){
    correct = rand() % 200;
    }else{
    correct = rand() % 20;

    }
    // % is the modulus operator gives the remainder
    cout<<correct<<endl;
    int guessCount =0;
    cout << "You get " << guesses << " guesses.\n";
    while(guessCount<guesses){
        
    
    cout << "Guess the number... \n";
    int guess;
    cin >> guess;
    if (guess == correct)
    {
        return true;
    }
    else if(guess<correct){
        cout<<"Too low mate\n";
    }
    else{
        cout<<"Too high..\n";
    }
    guessCount++;// guessCount = guessCount + 1;
    cout<<"You've guessed "<<guessCount<<endl;
    }
    return false;
};