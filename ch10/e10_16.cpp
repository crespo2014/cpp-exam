
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Compare {
        bool operator ()(int a) {return (a > 0);}//LINE I
        operator int() const{return (4);}//LINE II
};
int main () {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1, 4, 4, 9, 7, 2 };
        vector<int> v (mynumbers, mynumbers +11);
        int count = std::count(v.begin(), v.end(), Compare());//LINE III
        cout<< count <<endl;
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 1
compilation error in LINE I
compilation error in LINE II
runtime error at LINE III
program outputs: 4
program outputs: 3
compilation error in LINE III
*/
