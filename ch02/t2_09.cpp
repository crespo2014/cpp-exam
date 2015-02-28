#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  set<int> s1(mynumbers, mynumbers + 7);
  multiset<int> s2(s1.begin(), s1.end());
  s2.insert(s1.begin(), s1.end());
  s2.erase(s2.lower_bound(1), s2.upper_bound(4));                 //LINE I
  for (multiset<int>::iterator i = s2.begin(); i != s2.end(); i++)
  {
    cout << *i << ", ";
  }
  return 0;
}
/*
 The output will be
 Select correct answer(single choice)
 0, 1, 4, 5, 9,
 0, 1, 2, 3, 4, 5, 9,
 0, 1, 4, 5, 9, 0, 1, 4, 5, 9,
 0, 0, 5, 5, 9, 9,
 the exception will be thrown at line LINE I
 0, 5, 9,
 */
