#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v(mynumbers, mynumbers + 7);
  set<int> s1(v.begin(), v.end());
  s1.insert(v.begin(), v.end());
  s1.insert(10);
  s1.erase(s1.lower_bound(4), s1.upper_bound(6));
  s1.insert(v.begin(), v.end());
  for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
    cout << *i << ", ";
  return 0;
}

/*
 Select correct answers (multiple choice)
 size of s1 set is 8
 size of s1 set is 7
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 0, 1, 2, 3, 4, 5, 9, 10,
 program outputs: 0, 1, 2, 3, 4, 5, 10,
 */
