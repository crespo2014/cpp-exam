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
static bool identical(int a, int b)
{
  return b == a;        //LINE I
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  int othernumbers[] = { 3, 9, 0, 3, 1, 4, 3, 6, 6, 9, 8, 3 };
  vector<int> v1(mynumbers, mynumbers + 12);
  deque<int> d1(othernumbers, othernumbers + 12);

  pair<deque<int>::iterator, vector<int>::iterator> result;        //LINE II
  result = mismatch(d1.begin(), d1.end(), v1.begin(), identical);         //LINE III
  if (result.first == d1.end() && result.second == v1.end())
    cout << "Identical\n";
  else
    cout << "Not identical\n";
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: Identical
 compilation error in LINE III
 compilation error in LINE II
 the exception will be thrown at LINE III
 program outputs: Not identical
 compilation error in LINE I

 */
