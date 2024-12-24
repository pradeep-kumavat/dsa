#include<iostream>
#include<list>
using namespace std;
int main(){
   list<int> l;
   l.push_back(1);
   l.push_back(2);
   l.push_front(10);
   l.push_front(20);
//    for(int i:l){
//         cout<<"i: "<<i<<endl;
//    }
cout<<"size"<<l.size()<<endl;
list<int> n(l); //copy list to a new list
for(int i:n){
    cout<<i;
}



return 0;
}