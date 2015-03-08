#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
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
  sort(d1.begin(), d1.end());    //LINE I
  set<Pocket> s1(mynumbers, mynumbers + 7);
  cout << binary_search(s1.begin(), s1.end(), Pocket(3)) << ", "    //LINE II
      << binary_search(d1.begin(), d1.end(), Pocket(2)) << endl;
  return 0;
}

/*
 Select correct answer (single choice)
 program outputs: 1, 0,
 runtime error at LINE I
 runtime error at LINE II
 compilation error in LINE I
 program outputs: 2, 3,
 program outputs: 3, 2
 program outputs: 1, 1,
 compilation error in LINE II

 */
