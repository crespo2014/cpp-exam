#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
        double goodpi=3.1415;
        double badpi = 3.2;
        cout<<goodpi<<", ";
        cout<<badpi<<", ";
        cout<<setprecision();//LINE I
        cout<<goodpi<<", "; //LINE II
        cout<<badpi<<", ";
        return 0;
}

/*
Select correct answer (single choice)
runtime error at LINE II
program outputs: 3.1415, 3.2, 3.14, 3.20,
compilation error in LINE I
program outputs: 3.1415, 3.2, 3.14, 3.2,
program outputs: 3.1415, 3.2, 3.1, 3.2,
compilation error in LINE II
program outputs: 3.1415, 3.2, 3.1415, 3.20,
*/
