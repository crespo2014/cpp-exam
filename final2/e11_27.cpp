

//What will happen when you attempt to compile and run the following code?

#include <vector>
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
        bool operator < (const int & _Right) const
        { return value < _Right; }
        operator int() const
        { return value;        }
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
        Pocket mynumbers1[]={8, 9, 7, 6};
        int mynumbers2[]={4, 1, 4, 5};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_symmetric_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 4, 8, 3, 1,
compilation error in LINE II
compilation error in LINE I
program outputs: 1, 4, 4, 6, 7, 8, 0,
runtime error at LINE I
program outputs: 1, 4, 4, 6, 7, 8,
*/
