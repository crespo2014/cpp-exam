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
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        vector<Pocket> v1(mynumbers1, mynumbers1+3);
        inplace_merge(v1.begin(), v1.begin()+3, v1.end());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
program outputs: 0, 0, 0,
runtime error at LINE II
runtime error at LINE I
program outputs: 0, 0, 0, 0,
program outputs: 0, 2, 3,
program outputs: 0, 2, 3, 9
*/
