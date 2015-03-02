#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>

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
};

ostream & operator<<(ostream & c, const A & o)
{
  c << o.a;
  return c;
}

void fill(const int table[], unsigned size, vector<A*> & v)
{
  for (unsigned i = 0; i < size; ++i)
  {
    v.push_back(new A(table[i]));                        //LINE I
  }
}

static void del(A * p)
{
  delete p;
}
int main()
{
  int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  vector<A*> v1;
  fill(tab, 10, v1);

  print(v1.rbegin(), v1.rend()) << endl;                //LINE II
  for_each(v1.begin(), v1.end(), del);
  return 0;
}
/*
 * Select correct answer (single choice)
code will not compile due to error in line marked LINE II
code will not compile due to error in line marked LINE I
none of these
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10
program will run successfuly and display: 10 9 8 7 6 5 4 3 2 1
 */
