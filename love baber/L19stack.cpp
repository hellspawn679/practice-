#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("love");
    s.push("bubber");
    s.push("kumar");
    cout<<"top element "<<s.top()<<endl;
    s.pop();
    cout<<"top element after pop is "<<s.top()<<endl;
    cout<<"size of stack is "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
    return 0;
}