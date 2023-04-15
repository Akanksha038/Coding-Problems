/******************************************************************************

inbuild stack

*******************************************************************************/
#include <iostream>

using namespace std;
#include<stack>
// class node{
//     public:
//     int data;
//     node*next;
    
// };
// class stack(){
//     public:
//     node*head;
//     int size;
// };

int main()
{
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
   cout<< s1.size()<<endl;
    cout<<s1.empty()<<endl;
    
    
    
    // cout<<"Hello World";

    return 0;
}

//output
//30
//20
//2
//0
