// What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 9.9 8.8 7.7<enter>?
#include <iostream>
using namespace std;
int main ()
{
        double c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        cout << c3 << ", " << c1 << ", " << c2 << ", " << endl;
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 7, 9, 8,
program outputs: 7.7, 9.9, 8.8,
program outputs: 7.7, 8.8, 9.9,
program outputs: 7, 8, 9
*/
