#include<iostream>
using namespace std;
int main(){
    int i;
    cout <<"which number table you want ?"<<endl;
    cin>>i;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int c=1;
    do{ 
        cout<<i*c<<endl;
        c++;

    }while(c<11);
    
    
    return 0;
}