#include<iostream> 
#include<string> 
// using namespace std;  -> imports all the standard library

// using std::cout  -> only imports the cout from the standart library

// int return some data while void does not return anything
int main()
{
    std::cout<<"What is your name"<< " ";
    // system("pause") -> used to hold the terminal
   std::string name;
    std::cin>>name;
    std::cout<<"Your name is "<< name << std::endl;
    
return 0;
}