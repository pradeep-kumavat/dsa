#include<iostream>
using namespace std;

bool is_sorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remain = is_sorted(arr + 1, size - 1);
        return remain;
    }
   
}
int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int arr[1000];
    
    cout<<"enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    bool ans = is_sorted(arr,size);
    cout<<ans<<endl;
    

    return 0;
}