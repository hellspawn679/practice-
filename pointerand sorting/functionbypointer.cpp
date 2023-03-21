#include<iostream>
using namespace std;
int compare(int a, int b,int* greater, int* small){
    if(a>b){
        *greater=a;
        *small=b;
    }
    else{
        *greater=b;
        *small=a;
    }
}
int main()
{
    int a,b,great,small;
    cin>>a>>b;
    compare(a,b,&great,&small);
    cout<<great<<small;
    return 0;
}