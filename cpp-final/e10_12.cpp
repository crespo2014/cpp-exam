
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
        int mynumbers[] =        { 8, 9, 7, 6, 4, 1, 2};
        vector<int> v(mynumbers, mynumbers+6);
        multiset<int> s1(v.begin(),v.end());
        s1.insert(v.begin(),v.end());
        s1.insert(v.begin(),v.end());//LINE I
        pair<multiset<int>::iterator,multiset<int>::iterator> range;
        range = s1.equal_range(6);
        while (range.first != range.second) {
                cout<<*range.first<<", ";
                range.first++;
        }
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE I
program outputs: 6, 6, 6, 6,
runtime error at LINE II
compilation error in LINE II
runtime error at LINE I
program outputs: 6, 4, 1, 2,
program outputs: 6, 6, 6,
*/
