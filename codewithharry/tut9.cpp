#include<iostream>
#include<iomanip>
using namespace std;
 
int main(){ 
//     // sequence stucture
//     int age;
//     cout<<"tell me your age "<<endl;
//     cin>>age;
//     if((age<18) && (age>0))
//     {
//          cout<<"you can not come to my party"<<endl;
    
//     }   
//     else if(age==18)
//     {
//         cout<<"you are a kid and you will get a kid pass"<<endl;
//     }
//     else if(age>18){
//         cout<<"you can come to my party "<<endl;
//     }
//     else {
//         cout<<"you are not yet born "<<endl;
//     }
int age ;
cout<<"what is your age ?"<<endl;
cin>> age;

switch(age)
{
    case 18:
         cout<<"you are 18"<<endl;
    break;

    case 22:
         cout<<"you are 22"<<endl;
    break;

    case 35:
         cout<<"you are 35"
         <<endl;
    break;


 default:
 cout<<"no special cases"<<endl;
     break;
         
}
 cout<<"we are done"<<endl;
 
  return 0; 
 } 

 




