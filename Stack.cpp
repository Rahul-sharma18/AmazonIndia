#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack<int> s;

s.push(1);
s.push(2);
s.push(3);

for(int i=0; i<3; i++)
{
    cout<<s.top()<<endl;
    // s.pop();
}
if(s.empty())
{
cout<<"stack is empty " ;
}
else{
cout<<"Stack is not empty"<<endl;
}


cout<<"Size of stack "<< s.size();


}