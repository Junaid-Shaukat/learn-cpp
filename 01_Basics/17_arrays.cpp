#include <iostream>
#include <array> // for arrays method 3
using namespace std;

int main()
{

    // Method 1

    // string foods[3];
    // // 3 -> size of array and it is staticly types
    // foods[0] = "grapes";
    // foods[1] = "apple";
    // foods[2] = "lemons";
    // // here 0,1,2 is the index of array

    // cout<<foods[2]<<endl;

    // method 2

    // the size is 3 because we have 3 values
    // string foods[] = {"grapes", "apples", "lemons"};
    // printing

    // for (int i = 0; i < 3; i++)
    // {
        // cout << foods[i] << endl;
    // }

    // Method 3

    // array<string, 3> foods = {"grapes", "apples", "lemons"};
    // for (int i = 0; i < foods.size(); i++)
    // {
    //     cout << foods[i] << endl;
    // }
    
    //Method 4 


    array<string, 3> foods = {"grapes", "apples", "lemons"};
    for (string food : foods)
    {
        cout << food << endl;
    }
    // for (auto food : foods)
    // {
    //     cout << food << endl;
    // }
    return 0;
}