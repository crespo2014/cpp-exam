
#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        sort(v1.begin(), v1.end(), greater<int>());//LINE I
        for_each(v1.begin(), v1.end(), printer);//LINE II
        return 0;
}

/*
Select correct answers (multiple choice)
compilation error in LINE I
compilation error in LINE II
program outputs: 9, 8, 7, 6, 4, 1,
runtime error at LINE I
program outputs: 1, 4, 6, 7, 8, 9,
you can call sort function on v1 vector
program outputs: 9, 8, 7, 6, 4,
*/
