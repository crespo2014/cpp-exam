
//What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 4 5 6<enter>?

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
compilation error in LINE II
compilation error in LINE I
runtime error at LINE I
program outputs: 4, 5, 6, ,4, 5, 6,
program outputs: 4 5 6 4 5 6,
program outputs: 4 5 6, 4 5 6,
*/
