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
class A
{
  int a;
public:
  A(int a) :
      a(a)
  {
  }
  operator int() const
  {
    return a;
  }         //LINE I
};

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  set<A> s(mynumbers, mynumbers + 12);
  cout << equal(s.begin(), s.end(), s.begin()) << endl;         //LINE II

  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 1
 the exception will be thrown at LINE I
 compilation error in LINE II
 compilation error in LINE I
 program outputs: 0
 program outputs: true
 program outputs: false

 */
