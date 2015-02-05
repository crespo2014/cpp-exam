
#include <iostream>
using namespace std;
int main()
{
        cout<<127<<", ";
        cout.setf(ios::hex);//LINE I
        cout<<127<<", ";
        cout.setf (ios::showbase, ios::basefield );  //LINE II
        cout<<127<<", ";
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
program outputs: 127, 127, 127,
program outputs: 127, 7f, 0x7f
compilation error in LINE I
program outputs: 127, 7f, 7f
program outputs: 127, 0x7f, 0x7f
runtime error at LINE II
*/
