#include<iostream>
using namespace std;
int reverse(int arr[], int size){
    for (int i = 1; i <=size/2; i++)
    {
        int temp;
        temp = arr[i-1];
        arr[i-1]= arr[size-i];
        arr[size-i]= temp;
    }
    return 0;
}
int main(){
    cout<<"enter the size"<<endl;
    int size;
    cin>>size;
    int arr[1000];
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < size; i++)
    { 
        cin>>arr[i];
    }
    reverse(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}