#include<iostream>
#include<vector>
using namespace std;
int main(){
    // 1st way to initialize
    vector<int> ar = {3,4,5,1,2};
    // 2nd way to initialize
    vector<int> v(5,1);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    for (int i = 0; i < ar.size(); i++)
    {
        cout<<ar[i];
    }
    cout<<endl;
    ar.push_back(10);
    ar.push_back(20);
    ar.push_back(30);
    cout<<ar.size()<<endl; //gives no. of elements
    cout<<ar.capacity()<<endl; //gives the total capacity of array - how muvh memmory it can allocate
    cout<<"element at "<<ar.at(3);
    ar.pop_back();

    cout<<"before clear size : "<<ar.size()<<endl;
    ar.clear();
    cout<<"after clear size: "<<ar.size()<<endl;
    




    return 0;
}