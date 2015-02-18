

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
        int mynumbers1[]={8, 9, 7, 6};
        int mynumbers2[]={4, 1, 4, 5};
        vector<Pocket> v1(7, 0);
        sort(mynumbers2, mynumbers2 + 4);
        copy(mynumbers1, mynumbers1+3, v1.begin());
        copy(mynumbers2, mynumbers2+3, v1.begin()+3);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        inplace_merge(v1.begin(), v1.begin()+4, v1.end());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answers (multiple choice)
runtime error at LINE I
program outputs: 4, 4, 0, 8, 9, 7, 1,
you can't call inplace_merge function on non ordered v1 vector ;;;;
program outputs: 4, 4, 0, 8, 9, 7,
compilation error in LINE II
program outputs: 4, 4, 8, 9, 7, 1,
compilation error in LINE I
*/
