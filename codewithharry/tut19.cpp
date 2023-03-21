#include <iostream>
#include<string>
using namespace std;

int add(int a, int b){
    cout<<"using function with 2 arguments "<<endl;
    return a+b;
}

int add(int a, int b,int c){
    cout<<"using function with 3 arguments "<<endl;
    return a+b+c;
}
//cylinder
int volume(double r, int h){
    return(3.14*r*r*h);
}
// cube
int volume(int a){
    return(a*a*a);
}
// rectangular
int volume(int l, int b, int h){
    return(l*b*h);
}

int main(){
    cout<<"volume of cylinder of 3 and 5 is "<<volume(3,5)<<endl;
    cout<<"volume of cube of 3 "<<volume(3)<<endl;
    cout<<"volume of rectungle of 3,6 and 5 is "<<volume(3,6,5)<<endl;
    cout<<"the sum if 3 and 6 is "<<add(3,6)<<endl;
    cout<<"the sum if 3 ,7 and 6 is "<<add(3,6,7)<<endl;
     return 0;
}