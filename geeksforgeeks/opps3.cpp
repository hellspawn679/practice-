#include <iostream>
using namespace std;
class geeks
{
public:
    int id;
    ~geeks()//will run when the scope od object ends
    {
        cout << "destructor called for id " << id << endl;
    }
};
int main()
{
    geeks obj1;
    cout << "enter your id here " << endl;
    cin >> obj1.id;
    for (int i = 0; i < 5; i++)
    {
        geeks obj2;
        obj2.id = i;
    }//scope of obj2 ends here 
    return 0;
}//scope of obj1 ends here