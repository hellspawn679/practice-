#include <iostream>
#include <set>// sort arr in ascending order but the same elements is not printed twice so it can't be used for sorting
using namespace std;
int main()
{
    set <int> arr;
    
    arr.insert({3});
    arr.insert({1});
    arr.insert({7});
    arr.insert({4});
    arr.insert({7});
   

    for (auto &x : arr)
    {
        cout << x << endl;
    }
    return 0;
}

