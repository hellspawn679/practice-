#include <iostream>
using namespace std;
class geeks
{
public:
    string geekname;
    int id;
    void printname();
    void printid()
    {
       cout << "user id is :" << id;
    }
};

void geeks::printname()
{
    cout << "geekname is :" << geekname << endl;
}

int main()
{
    geeks obj1;
    cout << "enter your username here" << endl;
    cin >> obj1.geekname;
    cout << "enter your id " << endl;
    cin >> obj1.id;
    obj1.printname();
    obj1.printid();
    return 0;
}