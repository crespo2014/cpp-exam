//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);//LINE I
        cout<< *max_element(v1.begin(), v1.end()) << ", ";//LINE II
        return 0;
}

/*
Select correct answer (single choice)
runtime error at LINE I
program outputs: 3,
compilation error in LINE II
program outputs: 5,
you can't call max_element function on non ordered v1 vector
program outputs: 9,
runtime error at LINE II
program outputs: 0,
*/
