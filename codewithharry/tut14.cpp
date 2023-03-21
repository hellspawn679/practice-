#include <iostream>
using namespace std;
// "typedef" allow you to call "strcut employee" only "ep"
typedef struct employee

{
    int ID;        // let the memory be 4 bits
    char favchar;  // let the memory be 3 bits
    float salary;  // let the memory be 2 bits
} ep;     // total memory use 9 bit 
// union  allocate the max memory of a isngle quantity 
// in this case only 4 bit will used so you use one quantity at a time 
typedef union money
{
    int rice;    
    char car;
    float pounds;
}mad;

int main()
{   
    enum meal{ breakfast, lunch, dinner};
    meal m2 = breakfast;
    cout<<m2<<endl;
    cout<<(m2==2)<<endl;
    cout<<(m2==0)<<endl;
    meal m3 = lunch;
    cout<<m3<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    // struct employee harry
    
    // union money m1;
    mad m1;
    m1.rice=34;

    harry.ID =1;
    harry.favchar ='c';
    harry.salary = 12000;
    cout<<"the value is "<<harry.ID<<endl;
    cout<<"the value is "<<harry.favchar<<endl;
    cout<<"the value is "<<harry.salary<<endl;
    cout<<"the value is "<<m1.rice<<endl;
    return 0;
}