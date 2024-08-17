#include <iostream>
#include<fstream> // library for file handling
using namespace std;
int main()
{
//  cout<<"What did you eat?: ";
//  string food;
//  cin>>food;

// ofstream file("food.txt"); // make txt file
// file<<food;
// file.close();//close the file

//     Reading the file   //

ifstream file("food.txt");
string food;
file>>food;

cout<<"You ate "<<food<<endl;
file.close();
    return 0;
}

/*
This C++ code is a simple program that prompts the user to input what they ate and then saves that information to a text file named food.txt. Here’s a step-by-step explanation:

Include Libraries:

#include <iostream>: This includes the standard input-output stream library, which allows the program to use cin and cout for input and output.
#include <fstream>: This includes the file stream library, which is necessary for file handling operations like reading from and writing to files.
using namespace std;: This allows the program to use the standard namespace, so you don't have to prefix standard functions like cin, cout, and ofstream with std::.

int main(): This is the main function where the program starts execution.

cout<<"What did you eat?: ";: This line outputs the prompt "What did you eat?" to the console, asking the user for input.

string food;: This declares a string variable named food to store the user's input.

cin>>food;: This takes the input from the user and stores it in the food variable.

ofstream file("food.txt");: This creates an object of type ofstream (output file stream) named file and opens a file called food.txt for writing. If the file doesn't exist, it will be created. If it already exists, its contents will be overwritten.

file<<food;: This writes the contents of the food variable to the food.txt file.

file.close();: This closes the file, ensuring that all data is properly written and the file is safely closed.

return 0;: This indicates that the program has successfully executed.
*/