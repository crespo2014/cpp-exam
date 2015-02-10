
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
void multiply (int a) {
        a*3;//LINE I
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        for_each(v1.begin(), v1.end(), multiply);
        iter_swap(v1.begin(), mynumbers+5);//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
runtime error at LINE II
program outputs: 8, 9, 7, 6, 4, 1
compilation error in LINE II
program outputs: 1, 9, 7, 6, 4, 1,
program outputs: 3, 27, 21, 18, 12, 3,
compilation error in LINE I
*/
