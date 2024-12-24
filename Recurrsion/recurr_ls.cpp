#include<iostream>
using namespace std;

bool ls(int arr[], int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remain = ls(arr+1, size-1, key);
        return remain;
    }

}
int main(){
    int arr[5]= {3,5,1,6,2};
    int size = 5;
    int key = 6;

    bool ans = ls(arr, size, key);

    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    return 0;
}