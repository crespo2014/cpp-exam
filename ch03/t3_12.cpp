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
  int mynumbers[] = { 3, 9, 0, 2, 2, 2, 5 };
  vector<int> v(mynumbers, mynumbers + 7);
  vector<int>::iterator it = v.begin();

  while ((it = adjacent_find(it, v.end())) != v.end())
  {    //LINE I
    cout << it - v.begin() << ", ";
    it--;    //LINE II
  }
  cout << endl;
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 3, 4,
 program outputs: 2, 3,
 compilation error in LINE II
 program will run forever
 compilation error in LINE I
 the exception will be thrown at LINE I
 program outputs: 5, 6,
 program outputs: 2, 2, 2,

 */
