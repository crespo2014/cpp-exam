

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
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        vector<int> v2(7);
        transform(v1.begin(), v1.end(), v2.begin(), bind1st(Add(), -1));//LINE II
        for_each(v2.rbegin(), v2.rend(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
runtime error at LINE II
program outputs: 7, 8, 6, 8, 7,
runtime error at LINE I
program outputs: 0, 0, 3, 5, 6, 8, 7,
compilation error in LINE II
program outputs: 0, 3, 5, 6, 8, 7,
*/
