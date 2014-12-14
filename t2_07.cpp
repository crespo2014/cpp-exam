#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;
static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s(v.begin(), v.end());
    s.insert(v.begin(), v.end());
    v.push_back(5);
    s.insert(8);
    pair<set<int>::iterator, set<int>::iterator> range;
    range = s.equal_range(5);                 //LINE I
    cout << *range.first << ", " << *range.second << endl;
    return 0;
  }
  /*
   The output will be
   Select correct answer(single choice)
   8, 5
   4 5
   2 5
   5, 8
   compilation error in LINE I
   */
