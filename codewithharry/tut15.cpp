#include <iostream>
using namespace std;
//function prototype
//type function-name(arguments);
//int sum(int a; int b);--> accepetable
//int sum (int a,b);//-->not accepetable 
int sum (int ,int);// accepetable 
void g();//acceptable 


int main(){
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    //num1 and num 2 actual parameters
    cout<<"the sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;

}

int sum(int a,int b){
    // formal parameters --> a and b will be taking values formm actual parameters num 1 and num2

    int c = a+b;
    return c;
    }

void g(){
    cout<<"hello, gud morning";  
}

