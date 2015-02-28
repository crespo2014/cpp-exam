#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
        double goodpi=3.1415;
        double badpi = 3.2;
        cout<<goodpi<<", ";
        cout<<fixed;
        cout<<badpi<<", ";
        cout<<setprecision(3);//LINE I
        cout<<goodpi<<", "; //LINE II
        cout.unsetf(ios::floatfield);
        cout<<badpi<<", ";
        return 0;
}

/*
Select correct answer (single choice)
runtime error at LINE II
program outputs: 3.1415, 3.200000, 3.142, 3.200,
compilation error in LINE I
compilation error in LINE II
program outputs: 3.1415, 3.200000, 3.142, 3.20,
program outputs: 3.1415, 3.200000, 3.14, 3.200,
program outputs: 3.1415, 3.200000, 3.142, 3.2,
*/
