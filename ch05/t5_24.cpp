#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
#include <deque>
using namespace std;

class Pocket
{
  int value;
public:
  Pocket(int value) :
      value(value)
  {
  }
  int getValue() const
  {
    return value;
  }
  bool operator <(const Pocket & _Right) const
  {
    return value < _Right.value;
  }
  friend ostream & operator <<(ostream & stream, const Pocket & pocket)
  {
    stream << pocket.getValue();
    return stream;
  }
};

static void printer(Pocket i)
{
  cout << i << ", ";
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  deque<Pocket> d1(mynumbers, mynumbers + 7);
  sort(d1.begin(), d1.end());
  set<Pocket> s1(mynumbers, mynumbers + 7);
  cout << binary_search(s1.begin(), s1.end(), Pocket(3)) << ", "    //LINE I
      << binary_search(d1.begin(), d1.end(), Pocket(5)) << endl;    //LINE II
  return 0;
}
/*

 Select correct answer (single choice)
 compilation error in LINE I
 program outputs: 1, 1,
 compilation error in LINE II
 program outputs: 3, 5
 program outputs: 3, 3,
 program outputs: 1, 0,
 */
