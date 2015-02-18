
What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
int main()
{
        cout<<31<<", ";
        cout.setf(ios::hex);//LINE I
        cout<<31<<", ";
        cout.setf (ios::showbase, ios::basefield );  //LINE II
        cout<<63<<", ";
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 31, 31, 63
compilation error in LINE I
runtime error at LINE I
program outputs: 31, 31, 3f,
program outputs: 31, 31, ,
