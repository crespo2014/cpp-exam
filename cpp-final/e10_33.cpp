
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);//LINE I
        cout<< *max_element(v1.begin(), v1.end()) << ", ";//LINE II
        return 0;
}

/*
Select correct answers (multiple choice)
program outputs: 1,
runtime error at LINE II
you can call max_element function on non ordered v1 vector
compilation error in LINE I
you can't call max_element function on non ordered v1 vector
program outputs: 9,
program outputs: 8,
*/
