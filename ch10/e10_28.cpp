
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
        bool operator > (const Pocket & _Right) const
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
        int mynumbers[] = { 9, 7, 6, 4, 1 };
        vector<Pocket> s1(mynumbers, mynumbers + 5);//LINE I
        sort(s1.begin(), s1.end(), greater<Pocket>());//LINE II
        for_each(s1.begin(), s1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
program outputs: 4, 6, 7, 9,
compilation error in LINE I
program outputs: 9, 7, 6, 4, 1,
program outputs: 1, 4, 6, 7, 9,
*/
