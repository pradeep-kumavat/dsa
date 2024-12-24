#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<"";
    }
    cout<<endl; 
}

void sortOne(int arr[], int n){
    int left = 0 , right = n-1;

    while (left<right)
    {
        while (arr[left]==0 && left<right)
        {
            left++;
        }
        while (arr[right]==1 && left<right)
        {
            right--;
        }
        //agar yha pohoch gye ho to , iska mtlb
        //arr[left]==1 ans arr[right]==0
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
}
int main(){

    int arr[8]={1,1,0,0,0,0,1,0};
    printarray(arr,8);
    sortOne(arr,8);
    cout<<"printing after sorting"<<endl;
    printarray(arr,8);

    return 0;
}