#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(5);
    d.push_front(4);
    d.push_front(3);
    for (int i: d)
    {
        cout<<"i : "<<i<<endl;
    }
    cout<<"num at first index"<<d.at(1)<<endl;
    cout<<"num at zero index"<<d.at(0)<<endl;
    // d.pop_back();
    // for (int i: d)
    // {
    //     cout<<"i : "<<i<<endl;
    // }
    cout<<"first "<<d.front()<<endl;
    cout<<"last "<<d.back()<<endl;
    
    cout<<"before size"<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after size"<<d.size();




    return 0;
}