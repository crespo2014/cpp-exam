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
class Founder
{
  A val;
public:
  Founder(A & v) :
      val(v)
  {
  }
  bool operator()(A & v)
  {
    return (v.getA() == val.getA());
  }
};
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<A> v1(mynumbers, mynumbers + 7);    //LINE I
  set<A> s1(mynumbers, mynumbers + 7);
  A a(5);
  Founder f(a);
  find_if(s1.begin(), s1.end(), f.val);    //LINE II
  if (find_if(v1.begin(), v1.end(), f) != v1.end())  {    //LINE III
    cout << "Found!\n";
  } else
  {
    cout << "Not found!\n";
  }
  return 0;
}
/*
 Select correct answers(multiple choice)
 it will display Found!
 compilation error in LINE II
 compilation error in LINE I
 compilation error in LINE III
 it will compile successfully
 it will not compile successfully
 it will display Not found!

 */
