#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
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
  d1.push_back(3);    //LINE I
  pair<deque<Pocket>::iterator, deque<Pocket>::iterator> result = equal_range(d1.begin(), d1.end(), Pocket(3));    //LINE II
  for_each(result.first, result.second, printer);
  return 0;
}

/*
 Select correct answer (single choice)
 compilation error in LINE II
 program outputs: 3, 4,
 runtime error at LINE II
 runtime error at LINE I
 program outputs: 3,
 compilation error in LINE I
 program outputs: 3, 3,

 */
