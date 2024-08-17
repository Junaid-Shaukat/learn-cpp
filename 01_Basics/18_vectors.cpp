#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vectors are the dynamic arrays
    // vector<string> foods = {"grapes", "apples", "lemons"};
    // foods.push_back("grapes"); // add string at end of the vector
    // for (auto food : foods)
    // {
    //     cout << food << endl;
    // }
    vector<string> foods;
    foods = {"grapes", "apples", "lemons"};
    foods.push_back("grapes"); // add string at end of the vector
    for (auto food : foods)
    {
        cout << food << endl;
    }
    return 0;
}