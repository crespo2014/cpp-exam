

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
        int mynumbers[] = { 8, 9, 7, 6, 1, 1, 6, 6 };
        vector<int> v (mynumbers, mynumbers + 8);
        vector<int>::iterator it = search_n(v.begin(), v.end(), 2, 1);//LINE I
        cout<< it-v.begin()<<", ";//LINE II
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: 1,
program outputs: 4,
program outputs: 2,
compilation error in LINE II
runtime error at LINE I
program outputs: 8,
