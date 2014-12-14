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
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  vector<int> v1(mynumbers, mynumbers + 12);
  set<int> s1(mynumbers, mynumbers + 12);
  v1.push_back(10);
  pair<set<int>::iterator, vector<int>::iterator> resultSet = std::equal(s1.begin(), s1.end(), v1.begin());         //LINE I
  cout << *resultSet.first << ", " << *resultSet.second << endl;         //LINE II

  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 6
 the exception will be thrown at LINE I
 program outputs: 1
 program outputs: 2
 program outputs: 4
 compilation error in LINE II
 compilation error in LINE I

 */
