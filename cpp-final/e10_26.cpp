
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
        d1.push_back(2);//LINE I
        sort(d1.begin(), d1.end());
        pair<deque<int>::iterator, deque<int>::iterator > result = equal_range(d1.begin(), d1.end(), 2);//LINE II
        for_each(result.first, result.second, printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 0,
program outputs: 1, 2,
program outputs: 2
compilation error in LINE II
*/
