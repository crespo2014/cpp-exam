

//What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
struct MultiAdd : public binary_function<int, int, int> {
        int operator()(const int & _Left, const int & _Right) const
        { return 2*(_Left+_Right);}
};
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        deque<int> d1(mynumbers, mynumbers + 6);
        deque<int> d2(6);//LINE I
        transform(d1.begin(), d1.end(), d2.begin(), bind2nd(MultiAdd(), 1));//LINE II
        for_each(d2.begin(), d2.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 32, 36, 28, 24, 16, 4,
compilation error in LINE II
program outputs: 4, 10, 14, 16, 18, 20,
compilation error in LINE I
program outputs: 18, 20, 16, 14, 10, 4,
runtime error at LINE I
*/
