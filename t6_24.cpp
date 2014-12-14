//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
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
  bool operator <(const int & _Right) const
  {
    return value < _Right;
  }
  operator int() const
  {
    return value;
  }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
  stream << pocket.getValue();
  return stream;
}
void printer(Pocket i)
{
  cout << i << ", ";
}
int main()
{
  Pocket mynumbers1[] = { 3, 9, 0, 2 };
  int mynumbers2[] = { 6, 1, 4, 2 };
  vector<Pocket> v1(7, 0);
  sort(mynumbers2, mynumbers2 + 4);
  sort(mynumbers1, mynumbers1 + 4);    //LINE I
  set_difference(mynumbers1, mynumbers1 + 3, mynumbers2, mynumbers2 + 3, v1.begin());    //LINE II
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}

/*
 Select correct answer (single choice)
 program outputs: 3, 0, 0, 0, 0, 0, 0
 program outputs: 2, 0, 0, 0, 0, 0, 0,
 runtime error at LINE I
 program outputs: 0, 3, 0, 0, 0, 0, 0,
 runtime error at LINE II
 compilation error in LINE II
 */
