#include<iostream>
using namespace std;

bool palin(string str,int i , int j ){
    if(i>j){
        return true;
    }

    if(str[i]!=str[j]){
        return false;
    }
    else{
        return palin(str, i+1,j-1);
    }
}
int main(){

    string name = "bookkoob";

    bool ispalin = palin(name, 0, name.length()-1);

    if(ispalin){
        cout<<"it is palindrome string"<<endl;
    }
    else{
        cout<<"it is not palindrome string"<<endl;

    }

    return 0;
}