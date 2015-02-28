#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Pocket {
        T        value;
public:
        Pocket() {}
        Pocket(T value);
        T getValue() { return value; }
        void add(T _Right) { value += _Right; }
        friend ostream & operator<<(ostream & _os, const Pocket<T> & value) {
                _os<<value.value;
                return _os;
        }
};
template<class T>
Pocket<T>::Pocket(T value):value(value) {}
int main()
{
        Pocket<string> a("Hi");
        string n("Tech");
        a.add(n) ;//LINE I
        cout << a << ", ";//LINE II
        cout << a;
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
runtime error at LINE II
program outputs: Hi, Tech
program outputs: HiTech, HiTech
program outputs: HiTech,
*/
