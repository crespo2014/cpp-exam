
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 2, 4, 5};
        vector<int> v1(2);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_intersection(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+2, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 2, 2,
program outputs: 2, 0,
runtime error at LINE II
program outputs: 2,
compilation error in LINE II
compilation error in LINE I
*/
