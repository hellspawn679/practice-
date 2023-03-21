#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    //d.pop_front();
    //d.pop_back();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"print first index element --->"<<d.at(0)<<endl;
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;  
    cout<<"size before erase " <<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);
    cout<<"size before erase " <<d.size()<<endl;

    cout<<"is empty or not "<<d.empty()<<endl;

    return 0;
}