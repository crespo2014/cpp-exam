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
  it = find_end(v.begin(), v.end(), m1, m1 + 3);    //LINE I
  if (it != v.end()) cout << "Found at position: " << it - v.begin() << endl;
  return 0;
}
/*
 Select correct answer(single choice)
 compilation error in LINE I
 program outputs: Found at position: 9
 program outputs: Found at position: 1
 no output
 program outputs: Found at position:
 program outputs: Found at position: 2

 */
