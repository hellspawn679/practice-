#include <iostream>
using namespace std;

// double precious(int near, int a, int prec)
// {
//     double decmial = 1;
//     double g = near;
//     for (int i = 0; i < prec; i++)
//     {
//         decmial /= 10;
//         for (g; g * g < a; g += decmial)
//         {

//         }
//     }
//     return g;
// }
double more (int n, int prec,int tempsol){
    double factor =1;
    double ans = tempsol;
    for(int i=0;i<prec;i++){
        factor = factor/10;
        for(double j =ans ;j*j<n;j=j+factor){
            ans =j;
        }
    }
    return ans;
}

long long sqaure(int a)
{
    int s, e;
    int ans = -1;
    long long int m;
    s = 1;
    e = a;
    m = s + (e - s) / 2;
    while (s <= e)
    {
        if (m * m == a)
        {
            return m;
        }
        else if (m * m > a)
        {
            e = m - 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    // the number whose sqaure root we need to find
    int a, prec;
    cin >> a >> prec;
    int near = sqaure(a);
    cout << near << endl;
    cout << more(near, a, prec);
    return 0;
}