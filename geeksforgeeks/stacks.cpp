#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // empty()-->return wether the stack is empty or  not
    // size()--> return the size of stack
    // top()--> return  a refernce to the top most element of the stack
    // push(g)-->adds the element 'g' to the stack
    // pop()--> deletes the top most element of the stack
    stack<int> stack;
    stack.push(21);
    stack.push(2);
    stack.push(37);
    stack.push(34);
    stack.pop();
    stack.pop();
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
    return 0;
}