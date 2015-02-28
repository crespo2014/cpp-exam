#include <iostream>
using namespace std;
class NothingSpecial {};
template <typename T>
class Pocket {
        T        value;//LINE I
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
        Pocket<double> a(7);
        Pocket<NothingSpecial> n;//LINE II
        a.add(3) ;
        cout << a.getValue() << ", ";
        a.add(3) ;
        cout << a.getValue();
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 10, 13
program outputs: 10, 10
compilation error in LINE II
compilation error in LINE I
runtime error at LINE II
program outputs: 7, 7
*/
