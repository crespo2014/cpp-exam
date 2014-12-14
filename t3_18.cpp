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
struct Pair
{
  bool operator ()(int a)
  {
    return (a % 2) != 0;        //LINE I
  }
};
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  set<int> s(mynumbers, mynumbers + 12);

  int count = count_if(s.begin(), s.end(), Pair());        //LINE II
  cout << count << endl;
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 1
 program outputs: 3
 program outputs: 2
 compilation error in LINE II
 program outputs: 4
 the exception will be thrown at line LINE II
 compilation error in LINE I

 */
