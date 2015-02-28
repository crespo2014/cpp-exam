

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
        double goodpi=3.1415;
        double badpi = 3.2;
        cout<<goodpi<<", ";
        cout<<scientific;//LINE I
        cout<<setprecision(3);//LINE II
        cout<<goodpi<<", ";
        cout.unsetf(ios::floatfield);
        cout<<badpi<<", ";
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 3.1415, 3.142e+000, 3.20,
runtime error at LINE II
program outputs: 3.1415, 3.1415, 3.2,
compilation error in LINE II
program outputs: 3.1415, 3.142e+000, 3.2,
program outputs: 3.1415, 3.142e+000, 3.200,
*/
