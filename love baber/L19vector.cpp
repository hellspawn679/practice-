#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    vector<int> a(5,1);
    //create a custom capacity vector 
    cout<<"capacity  of a is -->"<<a.capacity()<<endl;
    cout<<"a vector is as follows"<<endl;
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"capacity of v is -->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity -->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity -->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity -->"<<v.capacity()<<endl;
    //size inrease in the factor of 2
    cout<<"element at 2 index "<<v.at(2)<<endl;
    cout<<"front --> "<<v.front()<<endl;
    cout<<"back--> "<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"capacity after pop is -->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
    return 0;
}