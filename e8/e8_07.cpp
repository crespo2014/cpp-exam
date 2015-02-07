#include <iostream>
using namespace std;
int main()
{
        cout<<127.45<<", ";
        cout.setf(ios::hex, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<127.45<<", ";
        cout.setf(ios::noshowbase);  //LINE II
        cout<<127.45<<", ";
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 127.45, 0x7f, 7f
program outputs: 127.45, 0x7f.2d, 7f.2d
compilation error in LINE I
runtime error at LINE II
program outputs: 127.45, 127.45, 127.45,
compilation error in LINE II
program outputs: 127.45, 0x7f.2d, 0x7f.2d
*/
