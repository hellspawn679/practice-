#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int n = 5 ;
    for (int i = 0; i < n; i++)
    {
       int  key = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (key > a[j])
            {
                a[i]=a[j];
                a[j] = key;
                key=a[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}