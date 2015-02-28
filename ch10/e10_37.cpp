
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
        double goodpi=3.141593;
        double badpi = 3.5;
        cout<<goodpi<<", ";
        cout<<scientific;//LINE I
        cout<<setprecision(4);//LINE II
        cout.unsetf(ios::floatfield);
        cout<<goodpi<<", ";
        cout<<badpi<<", ";
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
program outputs: 3.14159, 3.142e+000, 3.5,
program outputs: 3.14159, 3.142, 3.5,
program outputs: 3.14159, 3.14159, 3.5,
*/
