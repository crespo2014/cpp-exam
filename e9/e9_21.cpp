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
        Pocket<int> a(7);
        cout << a << ", ";
        cout << a.get<double>(2);
        return 0;
}

/*
Select correct answer (single choice)
runtime error at LINE II
program outputs: 7,
program outputs: 7, 2
compilation error in LINE II
program outputs: 7, 9
compilation error in LINE I
*/
