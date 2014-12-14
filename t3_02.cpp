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
struct myprinter
{
  void operator()(int i)
  {
    cout << i << ", ";
  }
};

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  deque<int> d1(mynumbers, mynumbers + 7);
  set<int> s1(mynumbers, mynumbers + 7);
  v1.pop_back(5);    // Line I
  for_each(s1.begin(), s1.end(), myprinter());    // Line II
  for_each(d1.begin(), d1.end(), *(new myprinter()));    // Line III
  for_each(v1.begin(), v1.end(), myprinter);    //Line IV
  return 0;
}
/*
 Select correct answers(multiple choice)
 compilation error in LINE II
 program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 9, 0, 2, 1, 4, 5, 3, 9, 0, 2, 1, 4,
 program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 9, 0, 2, 1, 4, 5, 3, 9, 0, 2, 1, 4, 5,
 compilation error in LINE III
 compilation error in LINE IV
 program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 9, 0, 2, 1, 4, 5, 3, 9, 0, 2, 1, 4, 5, 5
 compilation error in LINE I
 */
