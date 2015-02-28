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
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  deque<int> d1(mynumbers, mynumbers + 7);
  set<int> s1(mynumbers, mynumbers + 7);
  vector<int>::iterator founded = find(v1.begin(), v1.end(), 3);    //LINE I
  if (founded != v1.end())    //LINE II
  cout << "founded" << ", ";
  cout << find(d1.begin(), d1.end(), 9) << ", ";    //LINE III
  cout << find(s1.begin(), s1.end(), 6);    //LINE IV
  return 0;
}
/*
 Select correct answers(multiple choice)
 compilation error in LINE I
 program outputs: 3, 9, 6
 compilation error in LINE II
 compilation error in LINE III
 program outputs: founded, 9, 6
 program outputs: founded, 9,
 the exception will be thrown at LINE I
 compilation error in LINE IV

 Which sentences are true about the code below? Choose all that apply.
 */
