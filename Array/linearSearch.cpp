#include<iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"element "<<i+1 <<" ";
        cin>>arr[i];
    }
    cout<<"enter the num for search: ";
    cin>>target;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            cout<<"the number "<<target <<" is found at index "<<i<<endl;
        }
    }

    
    return 0;
}