#include <iostream>
using namespace std;
class binary
{
    string s;
private:
    void chk_bin(void); 
public:
    void read(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    chk_bin();// nesting of function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{

    cout << "you binary number compilment is " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    // OOP's--classes and objects
    // class--> extension of structures
    // structurse had limitaions
    //    memebers are public
    //    no methods

    // classes = structres + more
    // classes --> can have methods and properties
    // structure in c++ are typedef
    // you can declare objects along with the class declarion
    //  like  // class Employee{
    //      //class defiantion
    //  }; harry, rohan , lowish ;
    // harry.salary = 8 makes no sense if salary is private

    // nesting of number function
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    cout << endl;
    b.ones();
    b.display();

    return 0;
}