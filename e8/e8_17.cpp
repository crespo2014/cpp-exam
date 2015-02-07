// What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 9 8 a<enter>??
#include <iostream>
#include <string>
using namespace std;
int main ()
{
        string s;
        getline(cin, s); //LINE I
        cout << s << ", " << s << ", " << endl; //LINE II
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 9 8 a, 9 8 a,
program outputs: 9, 8,
program outputs: 9, 9,
compilation error in LINE I
program outputs: 9,
compilation error in LINE II
runtime error at LINE II
*/
