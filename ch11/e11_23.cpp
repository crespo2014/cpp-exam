//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={8, 9, 7, 6};
        int mynumbers2[]={4, 1, 4, 5};
        vector<int> v1(3);
        sort(mynumbers2, mynumbers2 + 3);
        sort(mynumbers1, mynumbers1 + 3);//LINE I
        set_symmetric_difference(mynumbers1, mynumbers1+1, mynumbers2, mynumbers2+2, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 1, 4, 7, 0, 0,
compilation error in LINE II
program outputs: 1, 4, 7,
runtime error at LINE I
runtime error at LINE II
program outputs: 1, 4, 4,
*/
