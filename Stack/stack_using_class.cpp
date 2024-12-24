#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (isFull())
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // creation of stack
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); 

     st.pop();

     cout<<"the top element is " <<st.peek()<<endl; //40
     st.pop();
     cout<<"the top element is " <<st.peek()<<endl; //30
     st.pop();
     cout<<"the top element is " <<st.peek()<<endl; //20

    if (st.isEmpty())
    {
        cout << "stack empty hai" << endl;
    }
    else
    {
        cout << "stack empty  nhi hai" << endl;
    }

    if (st.isFull())
    {
        cout << "stack full hai" << endl;
    }
    else
    {
        cout << "stack full  nhi hai" << endl;
    }

    return 0;
}