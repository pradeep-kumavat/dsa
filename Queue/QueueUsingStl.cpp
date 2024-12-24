#include<iostream>
#include <queue>
using namespace std;

int main(){
    //creation of queue
    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    //pop
    q.pop();

    cout<<"the queue is empty "<<q.empty()<<endl;
    cout<<"the size is queue "<<q.size()<<endl;

    cout<<"the element at front is "<<q.front()<<endl;
    cout<<"the element at rear is "<<q.back()<<endl;
    return 0;
} 