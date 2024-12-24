#include<iostream>
#include <stack>
using namespace std;

int main(){
    //creation of stack

    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);

    //pop
    s.pop();

    cout<<"top element is "<<s.top()<<endl;;
    cout<<"the stack is empty "<<s.empty()<<endl;
    cout<<"the size is stack "<<s.size()<<endl;
    return 0;
} 