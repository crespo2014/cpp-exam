

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
template<class T>
void f(T &a)//LINE I
{
        cout << 2 * a << endl;
}
int main()
{
        int a = 2;
        f(a);//LINE II
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
program outputs: 2
compilation error in LINE II
compilation error in LINE I
program outputs: 4
program outputs: 1
