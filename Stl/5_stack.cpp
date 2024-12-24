#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    
   cout<<st.top();
   st.pop();
   cout<<st.top();
   cout<<st.size();
   cout<<st.empty();
   




 return 0;
}