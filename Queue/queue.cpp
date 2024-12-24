#include <bits/stdc++.h> 
using namespace std;
class Queue {
public:
    int *arr;
    int qfront;
    int rear;
    int size;
    Queue(int size){
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty() {
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull() {
        if(rear == size-1){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(isFull()){  
            cout<<"queue is full";
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(isEmpty()){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
int main(){
    Queue q(5);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);

    //pop
    q.dequeue();


    cout<<"the element at front is "<<q.front()<<endl;
    return 0;
} 