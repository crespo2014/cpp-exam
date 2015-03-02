#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>

using namespace std;
template<typename T> ostream & print(const T & start, const T & end)
{
  T tmp = start;
  for (; tmp != end; ++tmp)
  {
    cout << *tmp << " ";
  }
  return cout;
}
class A
{
public:
  int a;
public:
  A(int a) :
      a(a)
  {
  }
  A(const A & a)
  {
  }
};

ostream & operator<<(ostream & c, const A & o)
{
  c << o.a;
  return c;
}

int main()
{
  int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  list<A> l1(tab, tab + 10);
  deque<A> d1;
  list<A>::iterator it;

  for (it = l1.begin(); it != l1.end(); ++it)
  {
    d1.insert(d1.begin(), it[0]);
  }
  print(d1.begin(), d1.end()) << endl;
  return 0;
}
/*
 * Select correct answer (single choice)
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10
code will not compile
program will run successfuly but displayed result is unpredictable
program will run successfuly and display: 10 9 8 7 6 5 4 3 2 1
*/

