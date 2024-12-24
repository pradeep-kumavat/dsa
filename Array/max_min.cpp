#include<iostream>
using namespace std;
int getmax(int arr[], int n){
    int max = INT32_MIN ;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max ){
            max = arr[i];
        }
    }
    return max;
}
int getmin(int arr[], int n){
    int min = INT32_MAX ;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min ){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int i, n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"element"<<i+1 <<" ";
        cin>>arr[i];
    }
    
    cout<<"the maximum number is " <<getmax(arr, n)<<endl;

    cout<<"the minimum number is " <<getmin(arr,n) <<endl;

    
    return 0;
}