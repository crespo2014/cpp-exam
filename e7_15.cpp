

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
int main() {
        Pocket mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<Pocket> v1(mynumbers, mynumbers+7);
        for_each(v1.begin(), v1.end(), bind1st(plus<Pocket>(), 1));//LINE II
        for_each(v1.rbegin(), v1.rend(), printer);
        return 0;
}
 
/*
Select correct answer (single choice)
program outputs: 5, 4, 1, 2, 0, 9, 3,
compilation error in LINE I
runtime error at LINE II
program outputs: 6, 5, 2, 3, 1, 10, 4, 0,
compilation error in LINE II
program outputs: 6, 5, 2, 3, 1, 10, 4,
*/
