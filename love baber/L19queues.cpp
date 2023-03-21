#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <string> q;
    q.push("love");
    q.push("babber");
    q.push("kumar");
    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element after pop is "<<q.front()<<endl;
    return 0;
}