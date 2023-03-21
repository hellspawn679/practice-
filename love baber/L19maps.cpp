#include<iostream>
#include<map>
//maps stores data into key and assign it a  value where 
//every key is unique and point ot a single value
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="max";
    m[19]="hitman";
    m[19]="set";
    m[2]="love";
    m[2]="little";
    m.insert({4,"sex"});
    for (auto i :  m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    cout<<"finding 19 --> "<<m.count(19)<<endl;
    m.erase(19);
    cout<<"finding 19 --> "<<m.count(19)<<endl;
    return 0;
}