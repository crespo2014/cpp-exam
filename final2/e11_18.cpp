
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
bool operator == (Pocket &_Left, int _Right)
{
        return (_Left.getValue()== _Right);
}
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
        vector<Pocket> v1(mynumbers, mynumbers + 6);
        sort(v1.begin(), v1.end());//LINE I
        remove(v1.begin(), v1.end(), 2);//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
program outputs: 8, 9, 7, 6, 4, 1,
program outputs: 1, 4, 7, 8, 9
runtime error at LINE I
program outputs: 1, 4, 6, 7, 8, 9,
*/
