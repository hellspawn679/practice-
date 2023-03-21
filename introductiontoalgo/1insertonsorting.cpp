#include <iostream>
using namespace std;
int main()
{
    int a[] = {5, 2, 4, 6, 1, 3};
    for (int j = 1; j < 6; j++)
    {
        int key = a[j];
        int i = j - 1;
        while ((i >= 0) && (a[i] > key))
        {
            a[i + 1] = a[i];
            i = i - 1;
            a[i + 1] = key;
        }
    }
    for (int j = 0; j < 6; j++)
    {
        cout << a[j] << endl;
    }
    return 0;
}