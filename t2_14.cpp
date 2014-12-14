#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;

static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 7 };
    vector<int> v(mynumbers, mynumbers + 7);
    multiset<int> s1(v.begin(), v.end());
    s1.insert(v.begin(), v.end());
    s1.insert(v.begin(), v.end());    //LINE I
    pair<multiset<int>::iterator, multiset<int>::iterator> range;
    range = s1.equal_range(5);
    while (range.first != range.second)
    {
      cout << *range.first << ", ";
      range.first++;
    }
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 5, 7, 9,
   program outputs: 5,
   program outputs: 5, 5, 5,
   compilation error in LINE I
   program outputs: 5, 5,
   program outputs: 5, 5, 9, 9,
   */
