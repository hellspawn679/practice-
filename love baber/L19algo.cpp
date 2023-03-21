#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(3);
    sort(v.begin(),v.end());
    //binary_serach(begin index , end index , element you want to find );find it the element is present or not 

    cout<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound -->"lower_bound(v.begin(),v.end(),6)
    return 0;
}