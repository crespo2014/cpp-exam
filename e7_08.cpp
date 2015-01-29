//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
struct Add : public binary_function<int, int, int> {
        int operator()(const int & _Left, const int & _Right) const//LINE I
        { return _Left+_Right;}
};
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);
        vector<int> v2(7);
        transform(v1.begin(), v1.end(), v2.begin(), bind1st(Add, -1));//LINE II
        for_each(v2.rbegin(), v2.rend(), printer);
        return 0;
}
 
/*
Select correct answer (single choice)
runtime error at LINE II
program outputs: 6, 5, 2, 3, 1, 10, 4,
program outputs: 4, 3, 0, 1, -1, 8, 2,
program outputs: 4, 10, 1, 3, 2, 5, 6,
compilation error in LINE I
compilation error in LINE II
*/
