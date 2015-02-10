
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(12);
        vector<int> v2(7);
        sort(mynumbers1, mynumbers1 + 4);
        copy(mynumbers1, mynumbers1+4, v1.begin());
        sort(mynumbers2, mynumbers2 + 4);
        copy(mynumbers2, mynumbers2+4, v1.begin()+5);//LINE I
        sort(v1.begin(), v1.end());
        merge(v1.begin()+4, v1.begin()+7, v1.begin()+5, v1.begin()+8, v2.begin());//LINE II
        for_each(v2.begin(), v2.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 0, 1, 1, 2, 2, 3, 0,
program outputs: 0, 1, 1, 2, 2, 3,
compilation error in LINE II
program outputs: 0, 0, 0, 1, 1, 2, 2,
*/
