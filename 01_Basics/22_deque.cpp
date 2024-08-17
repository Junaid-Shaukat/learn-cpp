#include <iostream>
#include<deque>

using namespace std;
//deque is the data structure in which we can add elements on both side
int main()
{
    deque<int> d;
    d.push_front(5);//add element
    d.push_front(2);
    d.push_front(1);
    for(auto i : d){
        cout<<i<<" ";
    }
    return 0;
}