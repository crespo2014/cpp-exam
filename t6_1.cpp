/*What will happen when you attempt to compile and run the following code?*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        merge(mynumbers1, mynumbers1+5, mynumbers2, mynumbers2+5, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}
/*
Select correct answer (single choice)
program outputs: 6, 1, 4, 5, 3, 9, 0, 2,
compilation error in LINE I
program outputs: 0, 1, 2, 3, 4, 5, 6, 9,
compilation error in LINE II
program outputs: 1, 2, 3, 4, 5, 6, 9, 0,
program outputs: 3, 9, 0, 2, 6, 1, 4, 5,
runtime error at LINE II
*/
