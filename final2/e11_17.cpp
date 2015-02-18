
What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        deque<int> d1(mynumbers, mynumbers + 6);
        deque<int>::iterator it = lower_bound(d1.begin(), d1.end(), 3);
        d1.push_back(4);//LINE I
        for_each(it, d1.end(), printer);//LINE II
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
compilation error in LINE II
program outputs: 8, 9, 7, 6, 4, 4,
runtime error at LINE I
program outputs: 8, 9, 7, 6, 4, 1, 4
program outputs: 8, 9, 7, 6, 4, 1,
