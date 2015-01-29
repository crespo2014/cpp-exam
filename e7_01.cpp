
// What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(4);
        transform(mynumbers1, mynumbers1+4, mynumbers2, v1.rbegin(), plus<int>());//LINE I
        for_each(v1.rbegin(), v1.rend(), printer);//LINE II
        return 0;
}
/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 9, 10, 4, 7,
program outputs: 3, 9, 0, 2, 6, 1, 4, 5,
program outputs: 4, 10, 1, 3, 7, 2, 5, 6 ,
runtime error at LINE II
runtime error at LINE I
program outputs: 6, 9, 4, 5,
*/

