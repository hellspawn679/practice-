#include<iostream>
using namespace std;
// data type 
//Integer(int): use = 4 bytes and range from -2147483648 to 2147483647
//long and long int are identical. 
//long long and long long int are idintical.
//Character(char): used for storing characters .use 1 byte and range from -128 to 127 or 0 to 255.
//Boolean(bool): used for storing Boolean or logical values. A Boolean variable can store either true(1) or false(0).
//Floating Point(float): Floating Point data type is used for storing  decimal values. use = 4 bytes
//Double Floating Point(double): Double Floating Point data type is used for storing double-precision floating-point values or decimal values. . use = 8 bytes . 
//void: Void means without any value. void data type represents a valueless entity. A void data type is used for those function which does not return a value. 
//Wide Character(wchar_t): Wide character data type is also a character data type but this data type has a size greater than the normal 8-bit datatype. It is generally 2 or 4 bytes long.



// x here is a global variable 
int x = 6 ;//static variable 
int d; // instance variable 
void max(){
    int a;
    cout<< x;
}

int main(){  
    //x and a here are local variables
    //local variable has more priority over global 
    int x = 9;
    bool a = true;
    max();
    cout<<endl;
    cout<<"the value of x and a is  "<< x <<" and "<< a ; 
    return 0; 
}