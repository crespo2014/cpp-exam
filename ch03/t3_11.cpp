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
bool compare(int a, int b)
{
  return a == b;
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v(mynumbers, mynumbers + 7);
  vector<int>::iterator it = v.begin();
  int m1[] = { 9, 0, 2 };

  while ((it = find_first_of(it, v.end(), m1, m1 + 3)) != v.end())
  {    //LINE I
    cout << it - v.begin() << ", ";    //LINE II
    it++;
  }
  cout << endl;
  return 0;
}
/*
 Select correct answer(single choice)
 the exception will be thrown at LINE I
 program outputs: 9, 0, 2,
 program outputs: 1, 2, 3,
 program will run forever
 compilation error in LINE I
 compilation error in LINE II

 */
