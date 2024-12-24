#include<iostream>
using namespace std;

int bin_search(int arr[], int s,int e,int key){
    int mid = s + (e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]< key){
        return bin_search(arr, mid + 1, e, key);
    }
    else{
        return bin_search(arr,s,mid-1,key);
    }

}
int main(){
    int arr[6]= {2,4,6,10,14,18};
    int size = 6;
    int key = 1;


    int ans = bin_search(arr, 0, 5, key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
    

    return 0;
}