

//What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
template <typedef T>//LINE I
class Pocket {
public:
        T        value;
        Pocket(T value){};//LINE II
};
int main()
{
        Pocket<double> a(7);
        cout << a.value << endl;
        return 0;
}

/*
Select correct answer (single choice)
compilation error, reason in LINE II
compilation error, reason in LINE I
program outputs: 7
runtime error at LINE II
program outputs: 7.0000
program outputs: 0
*/
