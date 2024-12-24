#include<iostream>
using namespace std;
int main(){
    char s1[20];
    cout<<"enter the name";
    cin>>s1;
    int count = 0;
    
    for(int i = 0; s1[i]!='\0' ;i++){
        count++;
    }
    cout<<count<<endl;



    return 0;
}