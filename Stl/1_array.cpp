#include<iostream>
#include<array>
using namespace std;
int main(){

    array<int ,10> a={1,2,3,4,5,1,45,87,12,3};
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    cout<<a.max_size()<<endl;;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.at(3)<<endl;




    return 0;
}