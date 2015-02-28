
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
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        deque<int> d1(mynumbers, mynumbers + 7);
        deque<int> d2(7);//LINE I
        transform(d1.begin(), d1.end(), d2.begin(), bind2nd(MultiAdd(), 1));//LINE II
        for_each(d2.begin(), d2.end(), printer);
        return 0;
}
 
/*
Select correct answer (single choice)
program outputs: 12, 10, 4, 6, 2, 20, 8,
compilation error in LINE I
program outputs: 8, 20, 2, 6, 4, 10, 12,
compilation error in LINE II
runtime error at LINE II
program outputs: 5, 11, 2, 4, 3, 6, 7,
*/
