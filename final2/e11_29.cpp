
//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[] = {8, 9, 7, 6, 4, 1};
        int mynumbers2[] = {7, 8, 7, 4, 5, 1};
        vector<int> v1(mynumbers1, mynumbers1+6);
        vector<int> v2(mynumbers1, mynumbers1+6);
        vector<int> v3(mynumbers2, mynumbers2+6);//LINE I
        transform(v1.begin(), v1.end(), v2.rbegin(), v3.begin(), minus<int>());//LINE II
        for_each(v3.rbegin(), v3.rend(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 1, 1, 0, 2, -1, 0,
program outputs:-7, -5, -1, 1, 5, 7,
runtime error at LINE I
compilation error in LINE II
program outputs: 0, -1, 2, 0, 1, 1,
*/
