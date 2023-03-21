#include <iostream>
using namespace std;

int main(){
   // what is pointer? ----> data type which holds the address of otherdata types

   int a=3;
   int* b = &a;
   //    &---> address of operater    
//     *---> derefrence operater 
   cout<<"the address of a is "<<&a<<endl;
   cout<<"the address of a is "<<b<<endl;
   cout<<"the value of address b is " <<*b<<endl;
//    pointer to pointer
   int** c= &b;
   cout<<"the address of b is "<<&b<<endl;
   cout<<"the address of b is "<<c<<endl;
   cout<<"the value of address c  is "<<*c<<endl;
   cout<<"the value at address value(address(c)) is "<<**c<<endl;
   
   
   return 0;
}

