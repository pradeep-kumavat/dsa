#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap 
    priority_queue<int> maxi;
    maxi.push(10);
    maxi.push(20);
    maxi.push(30);
    maxi.push(40);

    // min heap 
    priority_queue<int, vector<int> , greater<int> > mini;
    mini.push(10);
    mini.push(20);
    mini.push(30);
    mini.push(40);


    cout<<"maxi element : "<<maxi.top()<<endl;
    cout<<"mini element : "<<mini.top()<<endl;

    cout<<"maxi element : "<<maxi.size()<<endl;
    cout<<"mini element : "<<mini.size()<<endl;

    maxi.pop();
    mini.pop();
    
    cout<<"maxi element : "<<maxi.top()<<endl;
    cout<<"mini element : "<<mini.top()<<endl;




    return 0;
}