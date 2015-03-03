#include <iostream>
#include <set>
#include <list>
using namespace std;

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 4 };
  list<int> v(mynumbers, mynumbers + 7);    //LINE I
  set<int> s1(v.begin(), v.end());
  if (s1.count(4) == 2)
  {
    s1.erase(4);
  }
  for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
  {
    cout << *i << ", ";
  }
  return 0;
}
/*
 Select correct answer (single choice)
 program outputs: 0, 1, 2, 3, 5, 9,
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 0, 1, 2, 3, 5, 9, 4
 program outputs: 0, 1, 2, 3, 4, 5, 9, 4
 compilation error in LINE I
 */
