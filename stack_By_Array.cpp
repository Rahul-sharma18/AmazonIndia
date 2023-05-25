#include<iostream>
#include<stack>
using namespace std;

class Stack {
    properties 
    public:
    int *arr;
    int top;
    int size;

    behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int [size];
        top = -1;
    }

    void push (int element )
    {
        if(size - top > 1)
        {
            top++;
            arr[top]= element;
        }
        else
        {
            cout<<"Stack overflow"<< endl;
        }
    }
    void pop(int element)
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack underFlow"<<endl;
        }
    }

    int peek()
    {
        if (top >=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
     bool isEmpty()
     {
        if(top==-1)
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
    Stack st(5);

    st.push(22);
    st.push(24);
    st.push(26);

    cout<<st.peek()<<endl;
    st.pop(26);
    cout<<st.peek()<<endl;
    st.push(26);
    st.pop(26);
    st.pop(24);
    st.pop(22);
    st.pop(2);
    cout<<st.peek()<<endl;

}


