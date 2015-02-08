#include <iostream>
using namespace std;
template <class T>
class Pocket {
public:
        T        value;
        Pocket(T value);
};
template<class T>
Pocket::Pocket(T value):value(value) {}//LINE I
int main()
{
        Pocket<double> a(7);//LINE II
        cout << a.value << endl;
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
runtime error at LINE II
program outputs: 0
program outputs: 7
program outputs: 7.0000
compilation error in LINE II
*/
