

//What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
int main()
{
        cout<<31<<", ";
        cout.setf(ios::oct, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<31<<", ";
        cout.unsetf(ios::showbase);  //LINE II
        cout<<63<<", ";
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 31, 31, 63
runtime error at LINE I
compilation error in LINE II
program outputs: 31, 037, 77,
program outputs: 31, 31, 77,
*/
