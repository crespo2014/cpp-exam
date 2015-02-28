

//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }  
        operator int() const
        { return value;        }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {//LINE I
        cout << i << ", ";
}
template <typename T>
struct Add : public binary_function<T, T, T> {//LINE I
        T operator()(const T &_Left, const T &_Right) const
        { return _Left+_Right;   }
};
int main() {
        Pocket mynumbers1[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<Pocket> v1(mynumbers1, mynumbers1+7);
        vector<Pocket> v2(7, 0);
        transform(v1.begin(), v1.end(), v2.begin(), bind1st(ptr_fun (Add<Pocket>()), 1));//LINE II
        for_each(v2.rbegin(), v2.rend(), printer);
        return 0;
}
 
/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 6, 5, 2, 3, 1, 10, 4,
program outputs: 6, 5, 2, 3, 1, 10, 4, 0,
program outputs: 5, 4, 1, 2, 0, 9, 3,
compilation error in LINE II
*/
