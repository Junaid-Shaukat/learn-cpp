#include<iostream>
using namespace std;

int main(){
    // First loop using a for loop
        cout<<"This is the for loop"<<endl;
    for(int i = 0; i < 5; i++){
        cout << i << " ";
    }
    cout<<endl;
    
    // Second loop using a while loop
    int i = 0;  // 'i' is declared as a local variable again
        cout<<"This is the while loop"<<endl;
    while(i < 5){
        cout << i << " ";
        i++;
    }
    cout<<endl;
    
    // Third loop using a do-while loop
    int j = 0;  // 'j' is declared as another local variable
        cout<<"This is a do-while loop"<<endl;
    do {
        cout << j << " ";
        j++;
    } while (j < 5);

    return 0;
}
