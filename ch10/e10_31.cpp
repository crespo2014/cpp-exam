#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        sort(mynumbers1, mynumbers1 + 4);
        sort(mynumbers2, mynumbers2 + 4);
        deque<int> d1(mynumbers1, mynumbers1+3);//LINE I
        set<int> s1(mynumbers2, mynumbers2+3);//LINE II
        sort(d1.begin(), d1.end());
        cout<<includes(s1.begin(), s1.end(), mynumbers1, mynumbers1+2) <<", "
                <<includes(d1.begin(), d1.end(), mynumbers1, mynumbers1+2)
                <<endl;
        return 0;
}
 /*

Select correct answer (single choice)
program outputs: 1, 0,
program outputs: 1, 1,
runtime error at LINE II
program outputs: 0, 1,
compilation error in LINE I
compilation error in LINE II
*/
