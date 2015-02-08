#include <iostream>
using namespace std;
class SomethingSpecial {};
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
        Pocket<double> a(7);//LINE I
        Pocket<SomethingSpecial> n;
        n.add(SomethingSpecial()) ;//LINE II
        cout << a.getValue() << ", ";
        a.add(3) ;
        cout << a.getValue();
        return 0;
}


Type correct answer
