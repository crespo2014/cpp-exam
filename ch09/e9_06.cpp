#include <iostream>
using namespace std;
template <class T>
class Pocket {
        T        value;//LINE I
public:
        Pocket(T value):value(value) {}
};
int main()
{
        Pocket<double> a(7);
        cout << a.value << endl;//LINE II
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
program outputs: 7
program outputs: 0
runtime error at LINE II
program outputs: 7.0
*/
