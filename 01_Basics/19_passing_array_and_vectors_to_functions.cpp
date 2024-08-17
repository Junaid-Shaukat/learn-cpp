#include <iostream>
#include <array>
#include <vector>
using namespace std;

void printArray(string items[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << items[i] << " ";
    }
    cout << endl;
}

void printSTDArray(array<string, 5> items)
{
    for (int i = 0; i < items.size(); i++)
    {
        cout << items[i] << " ";
    }
    cout << endl;
}

void printVector(vector<string> items)
{
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
    printArray(foods1, sizeof(foods1) / sizeof(foods1[0]));
    printSTDArray(foods2);
    printVector(food3);

    return 0;
}