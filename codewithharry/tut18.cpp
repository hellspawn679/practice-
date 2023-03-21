#include <iostream>
using namespace std;

int factrioal(int n){
    if(n<=1){
        return 1;
    }
    return n* factrioal(n-1);
}
int main(){
    // facorial of a number;
    int a;
    cout<<"enter a number ";
    cin>>a;
    cout<< " the factorial of "<<a<< " is " << factrioal(a)<<endl;
    return 0;
}