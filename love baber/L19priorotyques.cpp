#include<iostream>
#include<queue>
//it will give maximum or min element first 
using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(5);
    maxi.push(2);
    maxi.push(30);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(5);
    mini.push(2);
    mini.push(1);
    mini.push(30); 
    int m= mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }
    cout<<"empty or not "<<mini.empty()<<endl;
    return 0;
}