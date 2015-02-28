#include <iostream>
#include <string>
using namespace std;
template <class T>
class Pocket {
        T        _v;
public:
        Pocket() {}
        Pocket(T v): _v(v){}
        T getV() { return _v; }
        void add(T & a) { _v+=a; }
};
int main()
{
        Pocket<string>        a("Hello");
        string s(" world!");
        a.add(s);
        cout << a.getV() <<endl;
        return 0;
}

/*
Select correct answer (single choice)
program will display Hello world!
program will not compile
program will display Hello
program will run without any output
*/
