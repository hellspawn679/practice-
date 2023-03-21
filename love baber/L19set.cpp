#include <iostream>
#include <set>
// each element is stored only once and element sorted after you etract
//  in unordered sets it is not sorted
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    // one element is only take only once
    // time complexity is log n
    for (int x : s)
    {
        cout << x;
    }
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout << endl;
    for (int x : s)
    {
        cout << x;
    }
    cout << endl;
    cout << "5 present or not -->" << s.count(5) << endl;
    cout << "-5 present or not -->" << s.count(-5) << endl;
    // find return iterator of the element if it is present
    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << it << " ";
    }
    cout<<endl;
    //cout<<s.size();

    return 0;
}