//What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
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
int main() {
        Pocket mynumbers1[] = { 3, 9, 0, 2, 1, 4, 5 };
        Pocket mynumbers2[]={Pocket(3),Pocket(2),Pocket(4),Pocket(1)};
        deque<Pocket> d1(mynumbers1, mynumbers1+7);
        set<Pocket> s1(mynumbers1, mynumbers1+7);
        sort(d1.begin(), d1.end());
        sort(mynumbers1, mynumbers1+5);
        sort(mynumbers2, mynumbers2+4);
        cout<<includes(d1.begin(),d1.end(), mynumbers1, mynumbers1+4)<<", "//LINE I
                <<includes(s1.begin(),s1.end(), mynumbers2, mynumbers2+3)//LINE II
                <<endl;
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 0, 1
runtime error at LINE II
compilation error in LINE II
program outputs: 0, 0
program outputs: 1, 1
runtime error at LINE I
program outputs: 1, 0
*/
