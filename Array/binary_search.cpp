#include<iostream>
using namespace std;

int bin_search(int arr[], int size,int key){
    int low,high,mid;
    low = 0;
    high = size-1;
    mid = low + (high-low)/2;
    while (low<=high)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        mid = low + (high-low)/2;
    }
    return -1;
}
int main(){
    int size,key;
    cout<<"enter the size: ";
    cin>>size;
    int arr[1000];
    
    cout<<"enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key: ";
    cin>>key;

    int index = bin_search(arr,size,key);
    cout<<"the element "<<key<<" is found at index "<<index<<endl;
    

    return 0;
}