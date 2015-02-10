
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
bool classifier(int v) {
        return v-4>0;
}
int main() {
        int mynumbers[] = { 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 5);
        set<int> s1(mynumbers, mynumbers + 5);
        replace_if(v1.begin(), v1.end(), classifier, 3);//LINE I
        for_each(v1.begin(), v1.end(), printer);//LINE II
        return 0;
}

/*
Select correct answers (multiple choice)
program outputs: 9, 7, 6, 4, 1,
compilation error in LINE I
compilation error in LINE II
program outputs: 9, 7, 6, 3, 3,
runtime error at LINE II
program outputs: 3, 3, 3, 4, 1,
you can call replace_if function with classifier function as 3rd parameter ;;;;
*/
