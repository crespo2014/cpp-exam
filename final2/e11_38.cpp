
What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
int main()
{
        cout<<31.23<<", ";
        cout.setf(ios::hex, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<31.23<<", ";
        cout.unsetf(ios::showbase);  //LINE II
        cout<<63.23<<", ";
        return 0;
}


Select correct answer (single choice)
program outputs: 31.23, 31.27, 77.27,
program outputs: 31.23, 037.27, 77.27,
compilation error in LINE I
runtime error at LINE I
compilation error in LINE II
program outputs: 31.23, 31.23, 63.23
