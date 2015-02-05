#include <iostream>
using namespace std;
int main()
{
        cout<<127<<", ";
        cout.setf(ios::oct, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<127<<", ";
        cout.unsetf(ios::showbase);  //LINE II
        cout<<127<<", ";
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
program outputs: 127, 0177, 0177
program outputs: 127, 127, 127,
compilation error in LINE I
runtime error at LINE II
program outputs: 127, 0177, 177
program outputs: 127, 0x177, 177
*/
