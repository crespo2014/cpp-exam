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
  int getA() const
  {
    return a;
  }
  void setA(int a)
  {
    this->a = a;
  }
  bool operator <(const A & b) const
  {
    return a < b.a;
  }
};
struct myprinter
{
  void operator()(const A & a)
  {
    cout << a.getA() << ", ";
  }
};
struct doubler
{
  void operator()(A a)
  {
    a.setA(a.getA() * 2);
  }    //LINE I
};

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<A> v1(mynumbers, mynumbers + 7);
  set<A> s1(mynumbers, mynumbers + 7);
  for_each(v1.begin(), v1.end(), doubler());
  for_each(v1.begin(), v1.end(), myprinter());    //LINE II
  for_each(s1.begin(), s1.end(), doubler());
  for_each(s1.begin(), s1.end(), myprinter());    //LINE III
  return 0;
}
/*
 Select correct answer(single choice)
 compilation error in LINE II
 compilation error in LINE III
 the exception will be thrown at LINE I
 compilation error in LINE I
 program outputs: 6, 18, 0, 4, 2, 8, 10, 6, 18, 0, 4, 2, 8, 10,
 program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9,
 program outputs: 6, 18, 0, 4, 2, 8, 10, 0, 2, 4, 6, 8, 10, 18,
 */
