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
};
template<class T>
Pocket<T>::Pocket(T value):value(value) {}
int main()
{
        Pocket<string> a("Hi");
        string n("Maker");
        a.add(n) ;//LINE I
        cout << a.getValue() << ", ";
        a.add(3) ;//LINE II
        cout << a.getValue();
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
runtime error at LINE II
program outputs: HiTech, HiTech
program outputs: Hi, Tech
program outputs: HiTech,
*/
