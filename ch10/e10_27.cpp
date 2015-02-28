
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        deque<Pocket> d1(mynumbers, mynumbers + 6);
        sort(d1.begin(), d1.end());
        d1.push_back(3);//LINE I
        pair<deque<Pocket> ::iterator, deque<Pocket>::iterator > result = equal_range(d1.begin(), d1.end(), Pocket(4));//LINE II
        for_each(result.first, result.second, printer);
        return 0;
}

/*
Select correct answer (single choice)
runtime error at LINE II
program outputs: 3, 4, ;;;;
compilation error in LINE II ;;;;
program outputs: 3,
program outputs: 4, 4, ;;;;
runtime error at LINE I ;;;;
compilation error in LINE I ;;;;
*/
