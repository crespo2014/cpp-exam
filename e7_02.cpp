// What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);
        for_each(v1.begin(), v1.end(), bind2nd(plus<int>(), 1));//LINE I
        for_each(v1.rbegin(), v1.rend(), printer);//LINE II
        return 0;
}
 
/*
Select correct answer (single choice)
runtime error at LINE I
compilation error in LINE I
program outputs: 4, 10, 1, 3, 2, 5, 6,
program outputs: 5, 4, 1, 2, 0, 9, 3,
runtime error at LINE II
program outputs: 3, 9, 0, 2, 1, 4, 5,
*/
