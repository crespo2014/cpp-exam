#include <iostream>
using namespace std;
template <typename T>//LINE I
class Pocket {
public:
        T        value;
        Pocket(T value);
};
template<class T>
Pocket<T>::Pocket(T value):value(value) {}//LINE II
int main()
{
        Pocket<double> a(7);
        cout << a.value << endl;
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 7
runtime error at LINE II
program outputs: 7.0000
compilation error in LINE II
compilation error, reason in LINE I
program outputs: 0
*/
