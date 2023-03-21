#include<iostream>
#include<string.h>
#include<cmath>
#include <unordered_map>//required by unorederd map
#include <map>//required by map function 
using namespace std;
int main()
{
   unordered_map<string,int>c;
   c["geeks"]=10;
   c["max"]=50;
   c["hep"]=30;
   c["jak"]=30;
   for(auto x : c)
   cout << x.first << " " <<x.second << endl;
   return 0;
}
//using map function
// int main(){
    
//    map<string,int>str;
//    str["ilikeyou"]=6;
//    str["you"]=7;
//    str["has"]=2;
//    str["ugly"]=9;
//    str["ili"]=0;
//  cout<<str.at("you")<<endl;
//    return 0;
// }