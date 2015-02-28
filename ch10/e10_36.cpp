
#include <iostream>
using namespace std;
int main()
{
        cout<<31<<", ";
        cout.setf(ios::hex);//LINE I
        cout<<31<<", ";
        cout.setf (ios::showbase );  //LINE II
        cout<<63<<", ";
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 31, 0x1f, 0x3f,
program outputs: 31, 31, 63
runtime error at LINE II
program outputs: 31, 1f, 0x3f,
compilation error in LINE II
compilation error in LINE I
*/
