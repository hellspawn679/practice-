#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size= a.size();
    
    for(int i=0;i<a.size();i++){
            cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index "<<a.at(2)<<endl;
    cout<<"empty or not "<<a.empty()<<endl;
    cout<<"first elemnt "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    
    return 0;
}