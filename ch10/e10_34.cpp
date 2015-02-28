
#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
        char s[]={"lazybrownfox"};
        char pattern1[]={"bro"};
        char pattern2[]={"foz"};
        sort(s, s+9);
        sort(pattern1, pattern1+3);
        sort(pattern2, pattern2+3);
        cout<<includes(s, s+7, pattern1, pattern1+3) <<", "
                <<includes(s, s+6, pattern2, pattern2+3);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 0, 0,
runtime error at LINE II
program outputs: 1, 0,
compilation error in LINE I
program outputs: 1, 1,
*/
