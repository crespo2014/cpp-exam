#include <iostream>
using namespace std;
int main()
{
        double goodpi=3.1415;
        double badpi = 3.2;
        cout<<goodpi<<", ";
        cout<<badpi<<", ";
        cout.setf(ios_base::showpoint);//LINE I
        cout<<goodpi<<", "; //LINE II
        cout<<badpi<<", ";
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
compilation error in LINE II
program outputs: 3.1415, 3.2, 3.14, 3.20
program outputs: 3.1415, 3.2, 3.14150, 3.20000,
program outputs: 3, 3, 3.14, 3.20
runtime error at LINE II
program outputs: 3, 3, 3.1415, 3.2
*/
