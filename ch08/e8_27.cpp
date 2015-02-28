
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        operator int() const
        {return getValue();}//LINE I
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
void printer(int i) {
        cout << i << ", ";
}
int main () {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<Pocket> v1(mynumbers, mynumbers + 7);
        fstream outfile("output.txt", ios::trunc|ios::out);
        for_each(v1.begin(), v1.end(), printer);
        outfile.close();
        outfile.open("output.txt");
        while( outfile.good())   //LINE II
        {
                int i;
                outfile>>i;
        }
        outfile.close();
        return 0;
}

/*
Select correct answers (multiple choice)
compilation error in LINE I
file output.txt will be opened for writing
program outputs: 3, 9, 0, 2, 1, 4, 5, 0,
program outputs: 3, 9, 0, 2, 1, 4, 5,
program runs forever without output
program outputs: 3, 9, 0, 2, 1, 4, 5,
program outputs: 3, 9, 0, 2, 1, 4, 5, 0,
*/

