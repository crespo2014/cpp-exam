
//What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: false 0 1<enter>?

#include <iostream>
using namespace std;
int main ()
{
        bool c1, c2, c3;
        cin >> boolalpha >> c1 >> c2 >> c3;
        cout << boolalpha << c3 << ", " << c1 << ", " << c2 << ", " << endl;//LINE I
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: true, false, true,
program outputs: 1, 0, 1,
program outputs: false, false, true,
runtime error at LINE I
*/
