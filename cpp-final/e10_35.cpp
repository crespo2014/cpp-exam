
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
        Pocket mynumbers[] = { 8, 9, 7, 6, 4 };
        vector<Pocket> v1(mynumbers, mynumbers+5);
        transform(v1.begin(), v1.end(), v1.begin(), bind2nd(plus<Pocket>(), 4));//LINE II
        for_each(v1.rbegin(), v1.rend(), printer);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 8, 10, 11, 12, 13,
program outputs: 8, 10, 12, 14, 16,
compilation error in LINE II
runtime error at LINE II
program outputs: 8, 10, 11, 13, 12,
compilation error in LINE I
*/
