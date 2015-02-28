#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
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
  operator int() const
  {
    return a;
  }
  bool operator <(const A & b) const
  {
    return b.a < a;
  }    //LINE I
};

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  set<A> s(mynumbers, mynumbers + 7);                        //LINE II
  multiset<A> s1(s.begin(), s.end());        //LINE III
  s1.insert(s.begin(), s.end());
  s1.erase(s1.lower_bound(2), s1.upper_bound(5));        //LINE IV
  multiset<A>::iterator i = s1.begin();
  for (; i != s1.end(); i++)
  {
    cout << i->getA() << ", ";
  }
  cout << endl;
  return 0;
}
/*
 The output will be
 Select correct answer(single choice)
 compilation error in LINE I
 compilation error in LINE II
 the exception will be thrown at line LINE I
 the exception will be thrown at line LINE III
 0, 1, 9
 *  the exception will be thrown at line LINE IV
 0, 0, 1, 1, 9, 9
 */
