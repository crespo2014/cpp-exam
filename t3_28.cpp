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
static void myprint(pair<int, int> i)
{
  cout << i.first << ", ";
}

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  map<int, int> m;
  for (int i = 0; i < 7; i++)
  {
    m[i] = mynumbers[i];         //LINE I
  }

  for_each(m.begin(), m.end(), myprint);         //LINE II
  return 0;
}/*
 Select correct answers(multiple choice)
 compilation error in LINE II
 program outputs: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
 size of map m is 6
 the exception will be thrown at LINE I
 program outputs: 0
 size of map m is 7
 size of map m is 8
 the exception will be thrown at LINE II
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 0, 1, 2, 3, 4, 5, 6,
 */
