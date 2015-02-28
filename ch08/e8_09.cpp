
#include <iostream>
using namespace std;
int main()
{
        cout<<false<<", "; //LINE I
        cout<<boolalpha<<", ";//LINE II
        cout<<true<<", ";
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 0, 0, true,
program outputs: 1, 0, 0,
program outputs: 0, 0, 1,
program outputs: 0, , true,
runtime error at LINE II
compilation error in LINE II
compilation error in LINE I
*/
