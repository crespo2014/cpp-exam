
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int  multiply (int a) {
        return a*3;//LINE I
}
int main() {
        int mynumbers[] = { 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 5);
        set<int> s1(mynumbers, mynumbers + 5);
        transform(s1.begin(), s1.end(), v1.begin(), multiply);//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 3, 12, 18, 21, 27,
compilation error in LINE I
program outputs: 27, 21, 18, 12, 3,
runtime error at LINE II
compilation error in LINE II
program outputs: 9, 7, 6, 4, 1
*/
