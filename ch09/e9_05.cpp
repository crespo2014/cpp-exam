#include <iostream>
using namespace std;
template<class A>
void f(A &a)//LINE I
{
        cout << 1 + a << endl;
}
void f(double &a)//LINE II
{
        cout << 2 + a << endl;
}
int main()
{
        float a = 1.5;
        f<float &>(a);//LINE II
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
program outputs: 2
program outputs: 2.5
compilation error in LINE I
runtime error at LINE II
program outputs: 3.5
*/
