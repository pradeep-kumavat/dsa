#include<iostream>
using namespace std;
int reverse_alt(int arr[], int size){
    for (int i = 0; i < size; i=i+2)
    {
        if(i+1<size){
            int temp;
            temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1]= temp;
        }
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
    reverse_alt(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}