
#include <iostream>
using namespace std;
int main()
{
        cout<<127<<", ";
        cout.setf(ios::hex, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<127<<", ";
        cout.unsetf(ios::showbase);  //LINE II
        cout<<127<<", ";
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 127, 7f, 0x7f
runtime error at LINE II
compilation error in LINE I
compilation error in LINE II
program outputs: 127, 127, 127,
program outputs: 127, 0x7f, 7f
program outputs: 127, 0x7f, 0x7f
*/
