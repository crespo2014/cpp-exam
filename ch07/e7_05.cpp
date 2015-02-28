

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
        int mynumbers1[] = {3, 9, 0, 2, 1, 4, 5};
        int mynumbers2[] = {9, 0, 2, 1, 4, 5, 3};
        vector<int> v1(mynumbers1, mynumbers1+7);
        vector<int> v2(mynumbers1, mynumbers1+7);
        vector<int> v3(mynumbers2, mynumbers2+7);//LINE I
        transform(v1.begin(), v1.end(), v2.rbegin(), v3.begin(), minus<int>());//LINE II
        for_each(v3.rbegin(), v3.rend(), printer);
        return 0;
}
 
/*
Select correct answer (single choice)
program outputs: 2, 5, 1, 0, 1, 5, 2,
program outputs: 6, -9, 2, -1, 3, 1, -2,
runtime error at LINE II
program outputs: 2, -5, 1, 0, -1, 5, -2,
compilation error in LINE I
runtime error at LINE I
*/
