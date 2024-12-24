#include<iostream>
#include <queue>
using namespace std;

int main(){
    //creation of queue
    deque<int> q;

    q.push_front(5);
    q.push_front(10);
    q.push_front(15);

    q.push_back(5);
    q.push_back(10);
    q.push_back(15);

    //pop
    // q.pop_back();

    cout<<"the queue is empty "<<q.empty()<<endl;
    cout<<"the size is queue "<<q.size()<<endl;

    cout<<"the element at front is "<<q.front()<<endl;
    cout<<"the element at rear is "<<q.back()<<endl;
    return 0;
} 