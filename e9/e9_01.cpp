#include <iostream>
using namespace std;
template<class T>
void f(T &a)//LINE I
{
        cout << 1 + a << endl;
}
int main()
{
        int a = 1;
        f(a);//LINE II
        return 0;
}
/*
 * Select correct answer (single choice)
program outputs: 2
program outputs: 3
compilation error in LINE I
runtime error at LINE II
compilation error in LINE II
program outputs: 1
 */
