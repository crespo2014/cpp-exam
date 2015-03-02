#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;
template<typename T> ostream & print(const T & start, const T & end)
{
  T tmp = start;
  for (; tmp != end; ++tmp)
  {
    cout << *tmp << " ";                        //LINE II
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
};

ostream & operator<<(const A & o, ostream & c)
{
  c << o.a;
  return c;
}

int main()
{
  int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  vector<A> v1(tab, tab + 10);                //LINE I
  v1.insert(v1.end(), A(0));
  print(v1.begin(), v1.end()) << endl;
  return 0;
}
/*
 * Select correct answer (single choice)
code will not compile due to error in line marked LINE I
program will run successfuly and display: 0 1 2 3 4 5 6 7 8 9 10
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10
code will not compile due to error in line marked LINE II
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10 0
 */
