#include<iostream>
using namespace std;

int firstOc(int arr[],int n, int key){
    int s = 0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
    
    if(arr[mid]==key){
        ans = mid;
        e = mid - 1;   
    }
    else if(arr[mid]<key){
        s = mid + 1;
    }
    else if(arr[mid]>key){
        e = mid - 1;
    }

    mid = s + (e-s)/2;
    }
    return ans;
}

int LastOc(int arr[],int n, int key){
    int s = 0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
    
    if(arr[mid]==key){
        ans = mid;
        s = mid + 1;     
    }
    else if(arr[mid]<key){
        s = mid + 1;
    }
    else if(arr[mid]>key){
        e = mid - 1;
    }

    mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int arr[] = { 1, 2, 3, 3, 5};
    cout<<"First occurance of 3 is index at "<<firstOc(arr,5,3)<<endl;;
    cout<<"Last occurance of 3 is index at "<<LastOc(arr,5,3)<<endl;

    pair<int ,int> p;
    p.first =  firstOc(arr,5,3);
    p.second =  LastOc(arr,5,3);
    int total = (p.second - p.first) + 1;
    cout<<"total no. of  Occurance is "<<total<<endl;

    return 0;
}