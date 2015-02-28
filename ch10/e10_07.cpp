#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
        int mynumbers[] =        { 8, 9, 7, 6, 4, 1 };
        vector<int> v(mynumbers, mynumbers+6);
        set<int> s1(v.begin(),v.end());
        s1.insert(v.begin(),v.end());
        s1.insert(v.begin(),v.end());//LINE I
        set<int>::iterator found = s1.find(9);
        for (; found!=s1.end(); ++found)
                cout << *found << ", ";
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 0,
runtime error at LINE I
program outputs: 1,
program outputs: 9,
compilation error in LINE I
*/
