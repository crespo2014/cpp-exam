// What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 7 8 9<enter>?
#include <iostream>
#include <string>
using namespace std;
int main ()
{
        string s;
        getline(s); //LINE I
        cout << s << ", " << s << ", " << endl; //LINE II
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 9, 8,
program outputs: 9, 9,
program outputs: 9 8 a, 9 8 a,
program outputs: 9,
compilation error in LINE II
runtime error at LINE II
*/
