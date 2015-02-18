

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
        int mynumbers [] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v (mynumbers, mynumbers + 6);
        vector<int>::iterator it;
        int m1[] = {7, 6, 4 };
        it = find_end (v.begin(), v.end(), m1, m1+3);//LINE I
        if (it != v.end())
                cout << "Found at position: " << it-v.begin() << endl; //LINE II
        return 0;
}


Select correct answer (single choice)
program outputs: Found at position:
program outputs: Found at position: 2
compilation error in LINE II
runtime error at LINE I
compilation error in LINE I
program outputs: Found at position: 1
