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
int main() {
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 2};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);
        set_symmetric_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE I
        cout<< *min_element(v1.begin(), v1.end()) << ", " ;//LINE II
        return 0;
}

/*
Select correct answers (multiple choice)
program outputs: 3,
runtime error at LINE II
compilation error in LINE II
compilation error
program outputs: 1,
program outputs: 0,
runtime error at LINE I
*/
