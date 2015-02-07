// What will happen when you attempt to compile and run the following code, assuming you enter following sequence: 9 8 7<enter> ?


#include <iostream>
using namespace std;
int main ()
{
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;
        cout << c3 << ", " << c1 << ", " << c2 << ", " << endl;
    return 0;
}

/*
Select correct answer (single choice)
program outputs: 8, 7, 9,
program outputs: 7, 9, 8,
program outputs: 8, 9, 7
program outputs: 7, 8, 9,
*/
