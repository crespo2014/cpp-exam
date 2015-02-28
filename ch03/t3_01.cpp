#include <vector>
#include <deque>
#include <list>
#include <stdio.h>
#include <ostream>
#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;
static void myprint(int i)
{
  cout << i << ", ";    // Line I
}

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  set<int> s1(mynumbers, mynumbers + 7);
  deque<int> d1(mynumbers, mynumbers + 7);
  d1.pop_front();    // Line II
  for_each(v1.begin(), v1.end(), myprint);    // Line III
  for_each(s1.begin(), s1.end(), myprint);
  for_each(d1.begin(), d1.end(), myprint);
  return 0;
}

/*
 Select correct answer (single choice)
 compilation error in LINE I
 program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 9, 0, 2, 1, 4, 5,
 the exception will be thrown at LINE III
 compilation error in LINE II
 program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 3, 9, 0, 2, 1, 4,
 program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 3, 9, 0, 2, 1, 4, 5,
 the exception will be thrown at LINE II
 */
