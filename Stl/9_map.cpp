#include<iostream>
#include<map>
using namespace std;
int main(){
    // map is key value pair 
    map<int,string> m ;
    m[1]= "pradeep";
    m[22]= "kumavat";
    m[3]= "ram";
    m.insert({4,"pra"});

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;;
    }
    cout<<m.count(21)<<endl;
    cout<<m.count(22)<<endl;
    
    m.erase(22);
    cout<<"after erase"<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;;
    }



    return 0;
}