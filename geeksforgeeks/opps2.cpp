#include<iostream>
using namespace std;
class geeks {
       public:
       int id;
       public:
       //default constructor
       geeks(){
        cout<<"default construtor is called"<<endl;
        id=-1;
       }
       //parameterized constructor
       geeks(int x){
        cout<<"parameteized constructor is called "<<endl;
        id =x;
       }
};

int main()
{
   geeks obj1;
   cout<<"geeks id is: "<<obj1.id<<endl;

   geeks obj2(21);
   cout<<"geeks id is: "<<obj2.id<<endl;
    return 0;
}