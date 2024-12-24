#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    s.erase(s.begin());
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"5 element is "<<s.count(5);
    cout<<"3 element is "<<s.count(3);
    




    return 0;
}