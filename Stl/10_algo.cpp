#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(40);
    v.push_back(5);

    cout<<"finding : " <<binary_search(v.begin(),v.end(),4)<<endl;

    cout<<"lower bound : " <<lower_bound(v.begin(),v.end(),40) -v.begin() <<endl;

    // int a = 5;
    // int b = 8;
    // cout<<"max :" <<max(a,b)<<endl;;
    // cout<<"max :" <<min(a,b)<<endl;;

    // swap(a,b);
    // cout<<"a: "<<a<<endl;
    // cout<<"b: "<<b<<endl;

    // string st = "abcd";
    // reverse(st.begin(),st.end());
    // cout<<"reverse of string abcd is :"<<st<<endl;

    // rotate(v.begin(),v.begin()+1,v.end());
    // cout<<"after rotation"<<endl;
    // for(auto i:v){
    //     cout<<i<<" ";
    // }


    // cout<<"after sorting"<<endl;
    // sort(v.begin(),v.end());
    // for(auto i:v){
    //     cout<<i<<" ";
    // }




    
    
    return 0;
    }