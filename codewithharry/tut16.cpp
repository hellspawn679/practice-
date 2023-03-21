#include <iostream>
using namespace std;
int sum(int a , int b){
    int c = a+b ;
    return c;
}
// this will not  swaped  a and b
int swap(int a , int b){   //temp    a     b
    int temp = a;          //4       4      5
    a = b ;                //4       5      5
    b = temp;              //4       5      4
}

//call by refrence by pointers --> this will work 
int pointerswap(int *a,int *b){    //temp    a     b
    int temp = *a;                 //4       4      5
    *a = *b ;                      //4       5      5
    *b = temp;                     //4       5      4
}
//call by refrence using C++ refence varabile
int & varibaleswap(int &a,int &b){    //temp    a     b
    int temp = a;                 //4       4      5
    a = b ;                      //4       5      5
    b = temp;                     //4       5      4
    return a;
}
int main(){
    int a=4, b=5;
    cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
    //swap(a,b);// this will  not swap a and b 
    //pointerswap(&a,&b);// this will swap a and b using reference by pointer refrence 
    varibaleswap(a,b) = 456;//this will swap a and b using reference varibles
    
    cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
    return 0;
}