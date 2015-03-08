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
  bool operator >(const Pocket & _Right) const
  {
    return _Right < value;
  }    //LINE I
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
  deque<Pocket>::iterator it = upper_bound(d1.begin(), d1.end(), Pocket(5), greater<Pocket>());    //LINE II
  for_each(it, d1.end(), printer);
  return 0;
}

/*
 Select correct answer (single choice)
 compilation error in LINE II
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 5,
 runtime error at LINE I
 runtime error at LINE II
 program outputs: 5, 9,
 compilation error in LINE I

 */
