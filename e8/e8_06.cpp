#include <iostream>
using namespace std;
int main()
{
        cout<<127.45<<", ";
        cout.setf(ios::hex, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<127.45<<", ";
        cout.unsetf(ios::showbase);  //LINE II
        cout<<127.45<<", ";
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
program outputs: 127.45, 0x7f.2d, 7f.2d
program outputs: 127.45, 0x7f, 7f
program outputs: 127.45, 127.45, 127.45,
program outputs: 127.45, 0x7f.2d, 0x7f.2d
runtime error at LINE II
*/
