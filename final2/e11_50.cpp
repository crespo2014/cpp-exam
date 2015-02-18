

// What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <string>
using namespace std;
template <class Ty>
class Pocket {
        Ty        value;
public:
        Pocket() {}
        Pocket(Ty value);
        Ty getValue() { return value; }
        void add(Ty _Right) { value += _Right; }
        template <class Tx>
        Tx get(Tx _Right) {
                return (Tx)(value) + _Right;//LINE I
        }
        friend ostream & operator<<(ostream & _os, const Pocket<Ty> & value) {
                _os<<value.value;
                return _os;
        }
};
template<class T>
Pocket<T>::Pocket(T value):value(value) {}
int main()
{
        Pocket<int> a(3);
        cout << a << ", ";
        cout << a.get<double>(2);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 3, 3,
compilation error in LINE I
program outputs: 3, 5
compilation error in LINE II
program outputs: 3, 6
*/
