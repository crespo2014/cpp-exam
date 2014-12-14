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
  bool operator >(const Pocket & _Right) const
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
  vector<Pocket> s1(mynumbers, mynumbers + 7);    //LINE I
  sort(s1.begin(), s1.end(), greater<Pocket>());    //LINE II
  for_each(s1.begin(), s1.end(), printer);
  return 0;
}

/*
 Select correct answer (single choice)
 runtime error at LINE II
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 9, 5, 4, 3, 2, 1, 0,
 compilation error in LINE II
 compilation error in LINE I
 runtime error at LINE I

 */
