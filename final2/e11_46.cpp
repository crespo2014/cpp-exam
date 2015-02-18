

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
void f(double a)//LINE II
{
        cout << 2 + a << endl;
}
template<class A>
void f(A &a)//LINE I
{
        cout << 1 + a << endl;
}
int main()
{
        double a = 1.5;
        f(a);//LINE II
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 1.5
program outputs: 2.5
compilation error in LINE I
compilation error in LINE II
program outputs: 3.5
