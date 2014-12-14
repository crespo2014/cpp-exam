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
  vector<int> v(mynumbers, mynumbers + 7);
  vector<int>::iterator it;
  int m1[] = { 9, 0, 2 };
  it = search(v.begin(), v.end(), m1, m1 + 3);         //LINE I
  cout << "found at position: " << it - v.begin() << endl;         //LINE II
  return 0;
}
/*
 Select correct answer(single choice)
 compilation error in LINE I
 compilation error in LINE II
 the exception will be thrown at LINE I
 program outputs: found at position: 2
 program outputs: found at position: 1
 program outputs: found at position: 0

 */
