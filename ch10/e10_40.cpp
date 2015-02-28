
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
        Pocket<string> a("Low");
        string n("End");
        a.add(n) ;//LINE I
        cout << a.getValue() << a.getValue();//LINE II
        return 0;
}

/*
Select correct answer (single choice)
program outputs: LowEndLowEnd
program outputs: LowEnd LowEnd
compilation error in LINE I
program outputs: Low EndLow End
program outputs: LowEnd, LowEnd
*/
