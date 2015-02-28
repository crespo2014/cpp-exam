
//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);
        int counter = count_if(v1.begin(), v1.end(), bind1st(plus<int>(), 4));//LINE I
        v1.push_back(counter);//LINE II
        for_each(v1.rbegin(), v1.rend(), printer);
        return 0;
}
 
/*
Select correct answer (single choice)
program outputs: 0, 5, 4, 1, 2, 0, 9, 3,
compilation error in LINE I
runtime error at LINE II
program outputs: 3, 9, 0, 2, 1, 4, 5,
runtime error at LINE I
program outputs: 4, 10, 1, 3, 2, 5, 6,
program outputs: 7, 5, 4, 1, 2, 0, 9, 3,
*/
