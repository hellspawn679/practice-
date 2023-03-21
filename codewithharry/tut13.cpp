#include<iostream>
using namespace std;

int main(){
    // array example
  
    int marks[]={23,45,56,89};
    // int mathmarks [4];
    //  mathmarks[0] = 2278 ;
    //  mathmarks[1] = 227 ;
    //  mathmarks[2] = 228 ;
    //  mathmarks[3] = 278 ;

    //  cout<<"these are math marks "<<endl;
    //  cout<<mathmarks[0]<<endl;
    //  cout<<mathmarks[1]<<endl;
    //  cout<<mathmarks[2]<<endl;
    //  cout<<mathmarks[3]<<endl;
    //  cout<<"these are  marks "<<endl;

    //  cout<<marks[0]<<endl;
    //  cout<<marks[1]<<endl;
    //  // you can change the value of an array 
    //  marks[2] = 455;
    //  cout<<marks[2]<<endl;
    //  cout<<marks[3]<<endl;

    //by using for loop
      
     for (int i = 0; i < 4; i++)
     {
        cout<< "the value of marks " <<i<< " is "<<marks[i]<<endl;
     }
     //POINTERS AND ARRAY
    
     //pointer arthemictic address new{p+i} = address cureent{i} + i*size of data type
     int* p = marks;
     cout<<"the value of marks[0] is "<<*(p)<<endl;
     cout<<"the value of marks[1] is "<<*(p+1)<<endl;
     cout<<"the value of marks[2] is "<<*(p+2)<<endl;
     cout<<"the value of marks[3] is "<<*(p+3)<<endl;

     cout<<"the address of marks[0] is "<<p<<endl;
     cout<<"the address of marks[1] is "<<p+1<<endl;
     cout<<"the address of marks[2] is "<<p+2<<endl;
     cout<<"the address of marks[3] is "<<p+3<<endl;    

    return 0;
}