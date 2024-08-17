#include <iostream>
#include <array>
#include <vector>
using namespace std;

// if we have functions of same name then which is executed is the function overloading
// It depends on the pasing the values as arguments

void print(string items[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << items[i] << " ";
    }
    cout << endl;
}

void print(array<string, 5> items)

{
    print(items.data(),items.size());
    for (int i = 0; i < items.size(); i++)
    {
        cout << items[i] << " ";
    }
    cout << endl;
}

void print(vector<string> items)
{
    print(items.data(),items.size());

    for (int i = 0; i < items.size(); i++)
    {
        cout << items[i] << " ";
    }
}

int main()
{

    string foods1[5] = {"tacos", "honey", "apples", "orange", "mango"};
    array<string, 5> foods2 = {"tacos", "honey", "apples", "orange", "mango"};
    vector<string> food3 = {"tacos", "honey", "apples", "orange", "mango"};
    food3.push_back("grapes");
    // printing
    print(foods1, sizeof(foods1) / sizeof(foods1[0]));
    print(foods2);
    print(food3);

    return 0;
}