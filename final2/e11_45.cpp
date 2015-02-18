

//What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
template<class T>
void f(T &a)//LINE I
{
        cout << 1 + a << endl;
}
int main()
{
        double a = 1.5;
        f<float &>(a);//LINE II
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
program outputs: 1.5
program outputs: 2.5
compilation error in LINE I
program outputs: 2
runtime error at LINE I
*/
