#include <iostream>
using namespace std;
// here innline is fast way to optimize the code for simple function
//limitaion - if you function is big it will take all your cache memory
// if compiler think inline is not need it will not use it
inline int product ( int a , int b){
    return a*b;
}
// it is not recommeded to use inline in static varivable
//int product(int a, int b){
//static int c=0 // this excutes only once 
// c= c+1; // next time this function is run , the value of  c will be retained
// return a*b+c;
//}
// here default arrgument should be one right  
float moneyrecived(int currentmoney, float factor =  1.04){
    return currentmoney*factor;
}

//constant don't modify 
//int strlen(const char *p)
 
int main(){
    int a,b;
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    cout<<"the product of a and b is "<< product(a,b)<<endl;
    int money = 100000;
   cout<<"if you have "<<money<<" rs in  your bank account, you will recive "<<moneyrecived(money)<< " rs after 1 year"<<endl;
   cout<<"for VIP if you have "<<money<<" rs in  your bank account, you will recive "<<moneyrecived(money,1.1)<< " rs after 1 year"<<endl;
    return 0;
}
