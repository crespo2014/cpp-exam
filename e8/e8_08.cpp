#include <iostream>
using namespace std;
int main()
{
        cout<<127<<", ";
        cout.setf(ios::hex, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<127<<", ";
        cout.unsetf(ios::showbase);
        cout<<std::showbase<<127<<", ";//LINE II
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
runtime error at LINE II
program outputs: 127, 0x7f, 7f,
compilation error in LINE II
program outputs: 127, 0x7f, 0x7f,
program outputs: 127, 0x7f, 87f,
program outputs: 127, 0x7f, 07f,
*/
