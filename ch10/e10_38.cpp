

//What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 6 5 7<enter>?

#include <iostream>
#include <string>
using namespace std;
int main ()
{
        string s;
        cin >> s; //LINE I
        cout << s << ", " << s << ", " << endl; //LINE II
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 6, 6,
program outputs: 6, 5, 7, 6, 5, 7,
program outputs: 6 5 7, 6 5 7,
compilation error in LINE I
compilation error in LINE II
*/
