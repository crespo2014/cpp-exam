

//What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
template <class T>
class Pocket {
public:
        T        value;
        Pocket(T value);
};
template<class T>
Pocket<T>::Pocket(T value):value(value) {}//LINE I
int main()
{
        Pocket<double> a(7);//LINE II
        cout << a.value << endl;
        return 0;
}

/*
Select correct answer (single choice)
runtime error at LINE II
program outputs: 7
compilation error in LINE II
compilation error in LINE I
program outputs: 7.0000
program outputs: 0
*/
