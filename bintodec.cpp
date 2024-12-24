#include<iostream>
#include <math.h>
using namespace std;

int main(){
    cout<<"enter the number "<<endl;
    int n;
    cin>>n;

    float ans=0;
    float i=0;
    while(n!=0){
        float digit = n % 10;
        if(digit==1){
        ans = ans + pow(2,i);
        }
        n = n /10;
        i++; 
    }
    cout<<"Answer is " <<ans <<endl;
    return 0;
} 