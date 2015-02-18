
What will happen when you attempt to compile and run the following code?

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
        double goodpi=3.141593;
        double badpi = 3.5;
        cout<<goodpi<<", ";
        cout<<setprecision(3);//LINE I
        cout<<goodpi<<", "; //LINE II
        cout<<badpi<<", ";
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 3.14159, 3.14, 3.5,
compilation error in LINE I
runtime error at LINE I
program outputs: 3.14159, 3.140, 3.500,
program outputs: 3.14159, 3.14, 3.50,
